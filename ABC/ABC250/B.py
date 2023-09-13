N,A,B=map(int,input().split(" "))
T="."
S="."
for i in range(N):
    for j in range(A):
        for k in range(N):
            for l in range(B):
                print(T,end="")
            if T==".":
                T="#"
            else:
                T="."
        print("")
        T=S
    if S == ".":
        S = "#"
    else:
        S = "."
    T = S