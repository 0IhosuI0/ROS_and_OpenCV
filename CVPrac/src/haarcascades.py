import cv2

image = cv2.imread('images/people.png')
image_resized = cv2.resize(image, (755, 500))
image2 = cv2.resize(image, (755, 500))
cascade_face_detector = cv2.CascadeClassifier('haarcascades//haarcascade_frontalface_default.xml')
face_detections = cascade_face_detector.detectMultiScale(image_resized)
for (x, y, w, h) in face_detections:
    cv2.rectangle(image_resized, (x, y), (x + w, y + h), (0, 255, 0), 2)


cascade_eye_detector = cv2.CascadeClassifier('haarcascades//haarcascade_eye.xml')
eye_detections = cascade_eye_detector.detectMultiScale(image2)
for (x, y, w, h) in eye_detections:
    cv2.rectangle(image2, (x, y), (x + w, y + h), (0, 255, 0), 2)


cv2.imshow("detect",image_resized)

cv2.imshow("detect eye", image2)

cv2.waitKey(0)
