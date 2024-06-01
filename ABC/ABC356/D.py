n, m = map(int, input().split())
# n = 4
# m = 3

if n == 0 or m == 0:
    print(0)
    exit(0)

ans = 0

for i in range(60):
    mask = 1 << i
    if (mask & m) == 0:
        continue

    full = 2 ** (i + 1)
    loopCount = n // full
    ans += loopCount * (full // 2)

    nokori = n % full
    ans += max(0, nokori - (full // 2) + 1)

print(ans % 998244353)