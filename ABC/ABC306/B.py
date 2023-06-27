a = input().split()
ans = 0
for i in range(64):
    ans += (2 ** i) * int(a[i])
print(ans)