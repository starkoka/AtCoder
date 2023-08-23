a,b,c,d=input().split(" ")

a=int(a)
b=int(b)
c=int(c)
d=int(d)
if a+b<c+d:
    print("Right")
elif a+b==c+d:
    print("Balanced")
else:
    print("Left")