#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,ans=1;
    cin>>n;
    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    for(int i=1; i<n; i++){
        if(d[i-1]!=d[i]){
            ans++;
        }
    }
    cout << ans << endl;
}
