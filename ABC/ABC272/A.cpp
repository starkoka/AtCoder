#include <bits/stdc++.h>
using namespace std;

int main(void){
    int ans=0,n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        ans+=x;
    }
    cout<<ans<<endl;
}
