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
    int n,m;
    cin >> n >> m;
    vi food(m);
    rep(i,0,n){
        int k;
        cin >> k;
        rep(j,0,k){
            int a;
            cin >> a;
            food[a-1]++;
        }
    }
    sort(all(food));
    cout << upper_bound(all(food),n) - lower_bound(all(food),n) << nl;

}
