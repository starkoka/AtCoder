#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    if(x < 0)x*=-1;
    sort(v.begin(),v.end());

    int i=0,j=0;
    while(i != n-1 && j != n-1){
        for(;v[i] - v[j] <= x;i++){
            if(j == n-1){
                break;
            }
            if(v[i] - v[j] == x){
                cout << "Yes" << endl;
                return 0;
            }
        }
        for(;v[i] - v[j] >= x;j++){
            if(j == n-1){
                break;
            }
            if(v[i] - v[j] == x){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
