import cv2

image = cv2.imread("images/bright.jpg", cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("[ERR] Media File Read Error")

dst1 = cv2.add(image, 100) # type: ignore
dst2 = cv2.subtract(image, 100) # type: ignore

dst3 = image + 100
dst4 = image - 100

cv2.imshow("orign", image)
cv2.imshow("bright - opencv", dst1)
cv2.imshow("dark - opencv", dst2
)
cv2.imshow("bright - numpy", dst3)
cv2.imshow("dark - numpy", dst4)

cv2.waitKey()
