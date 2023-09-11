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
    string ans;
    switch(n%10) {
        case 3:{
            ans = "bon";
            break;
        }
        case 0:{
            ans = "pon";
            break;
        }
        case 1:{
            ans = "pon";
            break;
        }
        case 6:{
            ans = "pon";
            break;
        }
        case 8:{
            ans = "pon";
            break;
        }
        default:{
            ans = "hon";
            break;
        }
    }
    cout << ans << nl;
}