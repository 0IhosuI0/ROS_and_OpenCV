PI = 3.14159265358979323846265028

def num_input():
  output = input("숫자 입력 >> ")
  return float(output)

def get_circumference(radius):
  return 2 * PI * radius

def get_circle_area(radius):
  return PI * radius * radius

print(__name__)
