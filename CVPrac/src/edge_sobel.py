import numpy as np, cv2
from Common.utils import differntial

image = cv2.imread("images/edge.jpg", cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("MEDIA FILE READ ERROR")

data1 = [-1, 0, 1,
         -2, 0, 2,
         -1, 0, 1]

data2 = [-1, -2, -1,
         0, 0, 0,
         1, 2, 1]

dst, dst1, dst2 = differntial(image, data1, data2)

dst3 = cv2.Sobel(np.float32(image), cv2.CV_32F, 1, 0, 3) #type: ignore
dst4 = cv2.Sobel(np.float32(image), cv2.CV_32F, 0, 1, 3)  #type: ignore
dst3 = cv2.convertScaleAbs(dst3)
dst4 = cv2.convertScaleAbs(dst4)

cv2.imshow("image", image)
cv2.imshow("sobel edge", dst)
cv2.imshow("dst1 - vertical mask", dst1)
cv2.imshow("dst2 - horizontal mask", dst2)
cv2.imshow("dst3 - vertical OpenCv", dst3)
cv2.imshow("dst4 - horizontal OpenCV", dst4)

cv2.waitKey()
