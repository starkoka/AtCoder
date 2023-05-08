import sympy
import numpy


def make_divisors(n):
    divisors = []
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n // i)

    divisors.sort()
    return divisors


n, m = map(int, input().split())

if n * n < m:
    print(-1)
else:
    flag = 0
    x = m
    while flag == 0:
        v = make_divisors(x)
        for i in range(int(numpy.sqrt(len(v)))):
            if v[len(v) - 1 - i] < n:
                flag = 1
                break
        if flag == 0:
            x += 1

    print(x)
