import numpy as np
import cv2
def onChange(value):
  global image, title

  add_value = value - int(image[0][0])
  print("Extra hwaso : ", add_value)
  image[:] = value
  cv2.imshow(title, image)

image = np.zeros((300, 500), np.int8)

title = 'Trackbar Event'
cv2.imshow(title, image)

cv2.createTrackbar('Brightness', title, image[0][0], 255, onChange)
cv2.waitKey(0)
cv2.destroyAllWindows()
