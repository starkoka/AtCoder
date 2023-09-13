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
    int n;
    cin >> n;
    vi a(n),b(n),ans1,ans2;
    uset num;
    rep(i,0,n){
        cin >> a[i];
    }
    rep(i,0,n){
        cin >> b[i];
        if(a[i]==b[i]){
            ans1.push_back(a[i]);
        }
        else{
            if(num.count(a[i])){
                ans2.push_back(a[i]);
            }
            else{
                num.insert(a[i]);
            }
            if(num.count(b[i])){
                ans2.push_back(b[i]);
            }
            else{
                num.insert(b[i]);
            }
        }
    }

    cout << ans1.size() << nl << ans2.size() << nl;
}