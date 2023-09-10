n = int(input())
a = list(map(int, input().split()))
num = 1
b_num = 0

for i in range(n):
    if num != a[i]:
        b_num += 1
    else:
        num += 1

if b_num == n:
    b_num = -1

print(b_num)
