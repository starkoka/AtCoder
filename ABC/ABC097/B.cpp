#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"



int main() {
    int x,ans=1;
    cin >> x;
    for(int i=2; i<x; i++){
        int n = i;
        for(int j=2; true ; j++){
            if(pow(n,j)>x){
                if(j!=2){
                    n = pow(n,j-1);
                    ans = max(ans,n);
                }
                break;
            }
        }
    }
    cout << ans << nl;
}
