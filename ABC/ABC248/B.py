A,B,K = input().split(" ")
A=int(A)
B=int(B)
K=int(K)
Ans=0
while(A<B):
    A=A*K
    Ans+=1
print(Ans)