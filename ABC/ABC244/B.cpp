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
    int n,now=0;
    string t;
    cin >> n >> t;

    intp xy = make_pair(0,0);
    fore(i,t){
        if(i=='R'){
            now++;
            now %= 4;
        }
        else{
            switch(now){
                case 0:
                    xy.F++;
                    break;
                case 1:
                    xy.S--;
                    break;
                case 2:
                    xy.F--;
                    break;
                case 3:
                    xy.S++;
                    break;
            }
        }
    }
    cout << xy.F << " " << xy.S << nl;
}