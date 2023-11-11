s = input()
t = ""

while s != t:
    t = s
    s = s.replace('ABC', '')

print(s)
