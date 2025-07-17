import numpy as np
import cv2

image = np.zeros((300, 400), np.uint8)
image.fill(200)

cv2.imshow('Window title', image)
cv2.waitKey(0)
cv2.destroyAllWindows()


list1, list2 = [1, 2, 3] , [4, 5.0, 6]
a, b = np.array(list1), np.array(list2)

c = a + b
d = a - b
e = a * b
f = a / b
g = a * 2
h = b + 2

print('a 자료형:', type(a), type(a[0]))
print('b 자료형:', type(b), type(b[0]))
print('c 자료형:', type(c), type(c[0]))
print('g 자료형:', type(g), type(g[0]))
print(c, d, e)
print(f, g, h)

i = np.zeros((2,5), np.int_)
j = np.ones((3,1), np.uint8)
k = np.empty((1,5), np.float32)
l = np.full(5, 15, np.float32)

print(type(i), type(i[0]), type(i[0][0]))
print(type(j), type(j[0]), type(j[0][0]))
print(type(k), type(k[0]), type(k[0][0]))
print(type(l), type(l[0]) )
print('k 형태:', k.shape, '   l 형태:', l.shape)
print(i), print(j)
print(k), print(l)


np.random.seed(10)
a = np.random.rand(2, 3)
b = np.random.randn(3, 2)
c = np.random.rand(6)
d = np.random.randint(1, 100, 6)
c = np.reshape(c, (2, 3))              # 형태(shape) 변경 방법1
d = d.reshape(2,-1)                    # 형태(shape) 변경 방법2

print('a 형태:', a.shape, '\n',  a)
print('b 형태:', b.shape, '\n', b)
print('c 형태:', c.shape, '\n', c)
print('d 형태:', d.shape, '\n', d)

print('다차원 객체 1차원 변환 방법' )
print('a =', a.flatten())                   # 다차원 ndarray 객체를 1차원 벡터로 변환
print('b =', np.ravel(b))                   # 다차원 모든 객체를 1차원 벡터로 변환
print('c =', np.reshape(c, (-1,)))          # 넘파이의 reshape() 함수 사용
print('d =', d.reshape(-1, ))               # ndarray 객체 내장 reshape() 함수 사용
