import numpy as np, cv2

image1 = cv2.imread("images/read_color.jpg", cv2.IMREAD_GRAYSCALE)
image2 = cv2.imread("images/mine2.jpg", cv2.IMREAD_GRAYSCALE)
if image1 is None or image2 is None: raise Exception("Media Read Error")

dif_img1 = cv2.subtract(image1, image2)
dif_img2 = cv2.subtract(np.int16(image1), np.int16(image2))
abs_dif1 = np.absolute(dif_img2).astype('uint8')
abs_dif2 = cv2.absdiff(image1, image2)

x, y ,w, h = 100, 150, 7, 3

print(f'[dif_img1(roi) uint8] = {dif_img1[y:y+h, x:x+w]}')
print(f'[dif_img2(roi) int16] = {dif_img2[y:y+h, x:x+w]}')
print(f'[abs_dif1(roi)] = {abs_dif1[y:y+h, x:x+w]}')
print(f'[abs_dif2(roi)] = {abs_dif2[y:y+h, x:x+w]}')

titles = ['image1', 'image2', 'dif_img1', 'abs_dif1', 'abs_dif2']
for title in titles:
  cv2.imshow(title, eval(title))
  cv2.waitKey()
