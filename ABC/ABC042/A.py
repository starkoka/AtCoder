n,l=map(int,input().split(" "))
list=[]
for i in range(n):
    list.append(input())
list.sort()
for i in range(n):
    print(list[i],end="")