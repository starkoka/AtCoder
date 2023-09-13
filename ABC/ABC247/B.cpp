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
    map<string,int> name;
    vector<pair<string,string>> names(n);

    rep(i,0,n){
        cin >> names[i].F >> names[i].S;
        name[names[i].F]++;
        name[names[i].S]++;
    }

    rep(i,0,n){
        if(name[names[i].F]==1 || name[names[i].S] ==1) {

        }
        else if(names[i].F == names[i].S && name[names[i].F]==2){

        }
        else{
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
}