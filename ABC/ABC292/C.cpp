#include <bits/stdc++.h>
using namespace std;

int PFA(int n){
    int ans = 0;
    for(int i=1; i<=sqrt(n);i++){
        if(n % i == 0){
            if(i*i == n){
                ans += 1;
            }
            else{
                ans += 2;
            }
        }
    }
    return ans;
}
int main(void){
    int n;
    cin >> n;
    int ans=0,ab,cd;
    for(int i=1;i<n;i++) {
        ans += PFA(i) * PFA(n-i);
    }
    cout << ans << endl;
    return 0;
}
