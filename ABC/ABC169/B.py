n = int(input())
a = list(map(int, input().split()))
ans = a[0]

for i in range(n):
    if a[i] == 0:
        print(0)
        exit()

for i in range(n-1):
    ans *=a[i+1]
    if ans > 1000000000000000000:
        print(-1)
        exit()
print(ans)