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


int main(){
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    vi lgcd(n),rgcd(n);

    rep(i,1,n){
        if(i==1){
            lgcd[i] = a[i-1];
        }
        else{
            lgcd[i] = gcd(lgcd[i-1],a[i-1]);
        }
    }
    rrep(i,n-2,0){
        if(i==n-2){
            rgcd[i] = a[i+1];
        }
        else{
            rgcd[i] = gcd(rgcd[i+1],a[i+1]);
        }
    }

    int ans = INT_MAX*-1;
    rep(i,0,n){
        if(i==0){
            ans = max(ans,rgcd[0]);
        }
        else if(i==n-1){
            ans = max(ans,lgcd[n-1]);
        }
        else{
            ans = max(ans,gcd(rgcd[i],lgcd[i]));
        }
    }

    cout << ans << nl;
}
