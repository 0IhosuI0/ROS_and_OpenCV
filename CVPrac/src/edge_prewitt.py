import numpy as np, cv2
from Common.utils import filter

def differntial(image, data1, data2):
  mask1 = np.array(data1, np.float32).reshape(3, 3)
  mask2 = np.array(data2, np.float32).reshape(3, 3)

  dst1 = filter(image, mask1)
  dst2 = filter(image, mask2)
  dst = cv2.magnitude(dst1, dst2)

  dst = cv2.convertScaleAbs(dst)
  dst1 = cv2.convertScaleAbs(dst1)
  dst2 = cv2.convertScaleAbs(dst2)
  return dst, dst1, dst2

image = cv2.imread("images/edge.jpg", cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("MEDIA FILE READ ERROR")

data1 = [-1, 0, 1,
         -1, 0, 1,
         -1, 0, 1]

data2 = [-1, -1, -1,
         0, 0, 0,
         1, 1, 1]

dst, dst1, dst2 = differntial(image, data1, data2)

cv2.imshow("image", image)
cv2.imshow("prewitt edge", dst)
cv2.imshow("dst1 - vertical", dst1)
cv2.imshow("dst2 - horizontal", dst2)
cv2.waitKey()
