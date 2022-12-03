# h, m = map(int, input().split())
def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n ** 0.5 // 1)) + 1):
        if temp % i == 0:
            cnt = 0
            while temp % i == 0:
                cnt += 1
                temp //= i
            arr.append([i, cnt])

    if temp != 1:
        arr.append([temp, 1])

    if not arr:
        arr.append([n, 1])

    return arr


int1 = int(input())
k = int1
m = 0
bunkai = factorization(k)
for i in range(len(bunkai)):
    if bunkai[len(bunkai) - i - 1][1] == 1:
        bunkai[len(bunkai) - i - 1][1] -= 1
        m = max(m, bunkai[len(bunkai) - i - 1][0])
    else:
        bunkai[len(bunkai) - i - 1][1] -= 1
        for j in range(len(bunkai) - i):
            if bunkai[j][1] >= 1:
                bunkai[j][1] -= 1
                m = max(m, bunkai[j][0] * bunkai[len(bunkai) - i - 1][0])

print(m)
