def print_n_times(value, n):
  for i in range(n):
    print(value)




print_n_times(input("출력할 문자열 >> "), int(input("출력 횟수 >> ")))


def mul(*values):
  result = 1
  for i in values:
    result *= i

  return result


print(mul(5, 7, 9, 10))

def fac(n):
  if n == 1:
    return 1
  else:
    return n * fac(n-1)


print(fac(10))

fiboDIC = {
  1: 1,
  2: 1
}

def fibo(n):
  if n in fiboDIC:
    return fiboDIC[n]
  else:
    output = fibo(n - 1) + fibo(n - 2)
    fiboDIC[n] = output
    return output

print(fibo(int(input("찾고 싶은 피보나치 수 >> "))))
