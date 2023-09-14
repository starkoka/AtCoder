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
#define LL_MAX 9223372036854775807

int main() {
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }

    rep(i,0,n-1){
        if(i!=0)cout << " ";
        cout << a[i];
        if(a[i]>a[i+1]){
            rrep(j,a[i]-1,a[i+1]+1){
                cout << " " << j;
            }
        }
        else{
            rep(j,a[i]+1,a[i+1]){
                cout << " " << j;
            }
        }
    }
    cout << a[n-1] << nl;
}