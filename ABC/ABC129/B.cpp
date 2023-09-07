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
    vi w(n);
    rep(i,0,n){
        cin >> w[i];
    }

    vi right(n),left(n);
    rep(i,0,n){
        if(i==0){
            left[i]=w[i];
        }
        else{
            left[i] = left[i-1] + w[i];
        }
    }

    rrep(i,n-1,0){
        if(i==n-1){
            right[i] = w[i];
        }
        else{
            right[i] = right[i+1] + w[i];
        }
    }

    int ans = INT_MAX;
    rep(i,0,n){
        if(i==0){
            ans = min(ans,right[i]);
        }
        else if(i==n-1){
            ans = min(ans,left[i]);
        }
        else{
            ans = min(ans,abs(right[i+1]-left[i]));
        }
    }
    cout << ans << nl;
}
