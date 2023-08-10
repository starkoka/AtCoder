N=int(input())
L0=2
L1=1
L2=1
for i in range(N-1):
    L2=L0+L1
    L0=L1
    L1=L2
print(L2)