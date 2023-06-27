#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,ans=0;
    cin >> n >> k;
    for(int i = 1; i <= min(k-2,n); i++){
        for(int j=1;j <= min(n,k-i-1);j++){
            if(k-i-j<=n)ans++;
        }
    }
    cout << ans << endl;

}
