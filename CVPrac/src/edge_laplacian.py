import numpy as np, cv2

image = cv2.imread("images/laplacian.jpg", cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("Media Error")

data1 = [[0, 1, 0],
         [1, -4, 1],
         [0, 1, 0]]

data2 = [[-1, -1, -1],
         [-1, 8, -1],
         [-1, -1, -1]]

mask4 = np.array(data1, np.int16)
mask8 = np.array(data2, np.int16)

dst1 = cv2.filter2D(image, cv2.CV_16S, mask4)
dst2 = cv2.filter2D(image, cv2.CV_16S, mask8)
dst3 = cv2.Laplacian(image, cv2.CV_16S, 1) #type: ignore

cv2.imshow("image", image)
cv2. imshow("filter2D - 4Direction", cv2.convertScaleAbs(dst1))
cv2. imshow("filter2D - 8Direction", cv2.convertScaleAbs(dst2))
cv2. imshow("Laplacian_OpenCV", cv2.convertScaleAbs(dst3))
cv2.waitKey()
