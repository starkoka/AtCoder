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
    int a,b,k;
    vi vec;
    cin >> a >> b >> k;
    rep(i,1,101){
        if(a%i==0 && b%i==0){
            vec.push_back(i);
        }
    }
    sort(all(vec));
    reverse(all(vec));
    cout << vec[k-1] << nl;
}
