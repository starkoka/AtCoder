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
    int n,w;
    cin >> n >> w;
    vi a;
    uset ans;
    rep(i,0,n){
        int A;
        cin >> A;
        if(A<=w){
            ans.insert(A);
            a.push_back(A);
        }
    }

    if(a.size()==2){
        if(a[0]+a[1]<=w){
            ans.insert(a[0]+a[1]);
        }
    }
    else{
        rep(i,0,n-2){
            rep(j,i+1,n-1){
                if(a[i]+a[j]<=w){
                    ans.insert(a[i]+a[j]);
                }
                rep(k,j+1,n){
                    if(a[i]+a[j]+a[k]<=w){
                        ans.insert(a[i]+a[j]+a[k]);
                    }
                    if(a[j]+a[k]<=w){
                        ans.insert(a[j]+a[k]);
                    }
                    if(a[i]+a[k]<=w){
                        ans.insert(a[i]+a[k]);
                    }
                }
            }
        }
    }
    cout << ans.size() << nl;
}