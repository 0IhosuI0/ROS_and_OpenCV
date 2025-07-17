import cv2
import matplotlib.pyplot as plt

image = cv2.imread("images/matplot.jpg", cv2.IMREAD_COLOR)
if image is None: raise Exception("Media File Read Error")

rows, cols = image.shape[:2]
rgb_img = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
gray_img = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

fig = plt.figure(num = 1, figsize = (3, 4))
plt.imshow(image), plt.title('figure1- original(bgr)') ## type: ignore
plt.axis('off'), plt.tight_layout() # type: ignore

fig = plt.figure(figsize = (6, 4))
plt.suptitle('figure2- pyplot image display') # type: ignore
plt.subplot(1, 2, 1), plt.imshow(rgb_img) # type: ignore
plt.axis([0, cols, rows, 0]), plt.title('tgb color') # type: ignore
plt.subplot(1, 2, 2), plt.imshow(gray_img, cmap = 'gray') # type: ignore
plt.title('gray__img2')
plt.show()
