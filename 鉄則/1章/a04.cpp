#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    vector<int> ans(10,0);

    for(i=1; n>1; i++){
        ans[10-i] = n % 2;
        n /= 2;
    }
    ans[10-i] = n;

    for(i=0;i<10;i++){
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
