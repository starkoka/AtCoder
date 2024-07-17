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
#define cinSet ios::sync_with_stdio(false);cin.tie(0)
#define F first
#define S second
#define nl "\n"
#define LL_MAX 9223372036854775807
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

int main() {
    cinSet;
    ll max=0,min=0;
    vi l;
    int n,m;
    cin >> n >> m;
    rep(i,0,n){
        int L;
        cin >> L;
        chmax(min,(ll)L);
        L++;
        l.push_back(L);
        max += L;
    }

    while(max>min+1){
        ll center = (max+min)/2;
        ll lines=1,txt=0;
        rep(i,0,l.size()){
            txt += l[i];
            if(txt>center){
                txt = l[i];
                lines++;
            }
        }
        if(lines > m){
            min = center;
        }
        else{
            max = center;
        }
    }
    cout << max-1 << nl;
}