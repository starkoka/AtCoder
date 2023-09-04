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


int main() {
    set<char> c = {'A','C','G','T'};
    string s;
    cin >> s;

    int ans=0,sum=0;
    rep(i,0,s.size()) {
        if(c.count(s[i]) == 1) {
            sum++;
        }
        else{
            ans = max(ans,sum);
            sum = 0;
        }
    }
    ans = max(ans,sum);
    cout << ans << nl;
}
