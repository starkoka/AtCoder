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
    vi h(n);
    rep(i,0,n){
        cin >> h[i];
    }

    vi dp(n);
    dp[0] = 0;
    dp[1] = abs(h[0]-h[1]);
    rep(i,2,n){
        dp[i] = min(dp[i-1] + abs(h[i-1]-h[i]) , dp[i-2] + abs(h[i-2]-h[i]));
    }

    vi ans;
    int place = n-1;
    while(true){
        ans.push_back(place + 1);
        if(place == 0)break;
        else if(place == 1 || dp[place]-dp[place-1] == abs(h[place]-h[place-1])){
            place -= 1;
        }
        else{
            place -= 2;
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
