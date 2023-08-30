#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"


int main() {
    int ans=INT_MAX;
    string s;
    cin >> s;
    rep(i,s.size()-2){
        ans = min(ans,abs(753-((s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + s[i + 2] - '0')));
    }
    cout << ans << nl;
}
