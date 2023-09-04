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
    vi abcde(5);
    rep(i,0,5){
        cin >> abcde[i];
    }
    int k;
    cin >> k;

    rep(i,0,5){
        rep(j,i,5){
            if(abs(abcde[i]-abcde[j]) > k){
                cout << ":(" << nl;
                return 0;
            }
        }
    }
    cout << "Yay!" << nl;
}
