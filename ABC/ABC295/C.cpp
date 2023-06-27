#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
    int n,ans = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int count = 1;
    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            ans += count/2;
            count = 1;
        }
    }
    ans += count/2;
    cout << ans << endl;
}
