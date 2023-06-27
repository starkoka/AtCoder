#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m),resultA(n),resultB(m);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int A=0,B=0;
    for(int i=1;i<=n+m;i++){
        if(A >= n){
            resultB[B] = i;
            B++;
        }
        else if(B >= m){
            resultA[A] = i;
            A++;
        }
        else{
            if(a[A] < b[B]){
                resultA[A] = i;
                A++;
            }
            else{
                resultB[B] = i;
                B++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << resultA[i] << " ";
    }
    cout << endl;
    for(int i=0;i<m;i++){
        cout << resultB[i] << " ";
    }
    cout << endl;
    return 0;
}
