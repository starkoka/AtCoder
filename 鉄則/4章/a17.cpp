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
    vi a(n),b(n);
    rep(i,1,n){
        cin >> a[i];
    }
    rep(i,2,n){
        cin >> b[i];
    }

    vi dp(n);
    dp[0]=0;
    dp[1]=a[1];
    rep(i,2,n){
        dp[i] = min(dp[i-1]+a[i],dp[i-2]+b[i]);
    }

    int num = n-1;
    vi ans(1,n);
    while(num>0){
        if(dp[num-2] + b[num] < dp[num-1] + a[num] && num-2>=0){
            ans.push_back(num-2+1);
            num -= 2;
        }
        else{
            ans.push_back(num-1+1);
            num -= 1;
        }
    }

    reverse(all(ans));
    cout << ans.size() << nl;
    rep(i,0,ans.size()){
        if(i!=0)cout << " ";
        cout << ans[i];
    }
    cout << nl;
}
