import math

n = int(input())

now_x = 0
now_y = 0

ans = 0

for i in range(n):
    x,y = map(int, input().split())
    ans += math.sqrt((now_x-x)*(now_x-x) + (now_y-y)*(now_y-y))
    now_x = x
    now_y = y

ans += math.sqrt(now_x**2 + now_y**2)
print(ans)
