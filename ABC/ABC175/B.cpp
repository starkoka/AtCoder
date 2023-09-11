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
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"


int main() {
    int n,ans=0;
    cin >> n;
    vi vec(n);
    rep(i,0,n){
        cin >> vec[i];
    }

    rep(i,0,n-2){
        rep(j,i+1,n-1){
            rep(k,j+1,n){
                if(vec[i] + vec[j] > vec[k] && vec[i] + vec[k] > vec[j] && vec[k] + vec[j] > vec[i] && vec[i] != vec[j] && vec[i]!= vec[k] && vec[j]!= vec[k]){
                    ans++;
                }
            }
        }
    }
    cout << ans << nl;
}