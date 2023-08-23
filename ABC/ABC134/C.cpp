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
    int n;
    cin >> n;
    vi list(n);
    intp max=make_pair(0,0);
    int maxS = 0;
    rep(i,n){
        cin >> list[i];
        if(list[i] > max.F){
            max.F = list[i];
            max.S = i;
        }
        else if(list[i] > maxS){
            maxS = list[i];
        }
    }

    rep(i,n){
        cout << (i == max.S ? maxS : max.F) << nl;
    }
}
