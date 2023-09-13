n=int(input())
if n%100>10:
    print(n%100)
elif n%100>0:
    print("0"+str(n%100))
else:
    print("00")