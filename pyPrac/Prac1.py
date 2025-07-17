print('helloWorld')
print(type('helloWorld'))
print(type(123))
print(type(0.213))

print("문자 선택 연산자")

for i in range(5):
  print("안녕하세요"[i])

print("안녕하세요"[1:4])

number = 100
print(number)
number += 10
print(number)
print(number + 10)
number += 20
print(number)
number += 30
print(number)

user_input = input("입력 : ")
print(user_input)
print(user_input * 2)

a = input("input num : ")
int_a = int(a)

b = input("input num : ")
int_b = int(b)

print(a + b)
print(int_a + int_b)

a = "10 20 30 40 50".split(" ")
print(a)
print(type(a))

