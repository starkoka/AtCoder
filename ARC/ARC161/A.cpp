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
    if(n==1){
        cout << "Yes" << nl;
        return 0;
    }
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    sort(all(a));
    rep(i,0,n/2){
        if(a[i]>=a[i+n/2+1]){
            cout << "No" << nl;
            return 0;
        }
        else if(i!=0){
            if(a[i]>=a[(i-1)+n/2+1]){
                cout << "No" << nl;
                return 0;
            }
        }
    }
    if(a[n/2]<a[n-1]){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}