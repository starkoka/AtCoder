h, m = map(int, input().split())

a = h // 10
b = h % 10
c = m // 10
d = m % 10

while a * 10 + c > 23 or b * 10 + d > 59:
    m += 1
    if m > 59:
        h += 1
        m = 0
    if h > 23:
        h = 0
    a = h // 10
    b = h % 10
    c = m // 10
    d = m % 10

print(str(h) + " " + str(m))
