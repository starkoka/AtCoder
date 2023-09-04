#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
#define nl "\n"


int main() {
    vi n(5);
    int ans = 0;
    intp Min=make_pair(INT_MAX,INT_MAX);
    rep(i,0,5){
        cin >> n[i];
        if(n[i]%10 <= Min.F && n[i]%10 !=0){
            Min = make_pair(n[i]%10,i);
        }
    }

    rep(i,0,5){
        if(i==Min.S){
            ans += n[i];
        }
        else{
            if(n[i]%10==0)ans += n[i];
            else ans += (n[i]/10+1)*10;
        }
    }
    cout << ans << nl;
}
