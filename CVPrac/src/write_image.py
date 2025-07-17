import cv2

image = cv2.imread("images/read_color.jpg", cv2.IMREAD_COLOR)
if image is None: raise Exception("Media File Read Error")

params_jpg = (cv2.IMWRITE_JPEG_QUALITY, 10)
params_png = [cv2.IMWRITE_PNG_COMPRESSION, 9]

cv2.imwrite("images/wirte_test1.jpg", image)
cv2.imwrite("images/wirte_test2.jpg", image, params_jpg)
cv2.imwrite("images/wirte_test3.png", image, params_png)
cv2.imwrite("images/wirte_test4.bmp", image)

print("Save Success")
