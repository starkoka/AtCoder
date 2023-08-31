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
    int s;
    cin >> s;
    uset num;
    num.insert(s);
    rep(i,1,1000000){
        if(s%2==0){
            s/=2;
        }
        else{
            s = 3*s+1;
        }
        if(num.count(s)){
            cout << i+1 << nl;
            return 0;
        }
        num.insert(s);
    }
}
