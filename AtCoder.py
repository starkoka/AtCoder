n = int(input())
ab = []

for i in range(n):
    a, b = map(int, input().split())
    data = a/(a+b), i+1
    ab.append(data)

ab.sort(key=lambda x: (-x[0], x[1]))

for i in range(n):
    print(ab[i][1],end=" ")
