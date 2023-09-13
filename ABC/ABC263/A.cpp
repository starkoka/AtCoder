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
#define LL_MAX 9223372036854775807

int main() {
    uset num;
    vi vec(5);
    rep(i,0,5){
        cin >> vec[i];
        num.insert(vec[i]);
    }
    sort(all(vec));
    if(num.size()==2 && (vec[1]!=vec[2] || vec[2]!=vec[3])){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}