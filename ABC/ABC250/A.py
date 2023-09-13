H,W=map(int,input().split(" "))
R,C=map(int,input().split(" "))
a=0
i=1
j=1
for i in range(H+1):
    for j in range(W+1):
        if abs(i-R)+abs(j-C)==1 and i!=0 and j!=0:
            a=a+1
print(a)