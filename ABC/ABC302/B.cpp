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
    int h,w;
    cin >> h >> w;
    vector<string> vec(h);
    rep(i,0,h){
        cin >> vec[i];
    }

    rep(i,0,h-5+1){
        rep(j,0,w){
            if(vec[i][j]=='s' && vec[i+1][j]=='n' && vec[i+2][j]=='u' && vec[i+3][j]=='k' && vec[i+4][j]=='e'){
                rep(k,0,5){
                    cout << i+k+1 << " " << j+1 << nl;
                }
                return 0;
            }
            else if(vec[i][j]=='e' && vec[i+1][j]=='k' && vec[i+2][j]=='u' && vec[i+3][j]=='n' && vec[i+4][j]=='s'){
                rrep(k,4,0){
                    cout << i+k+1 << " " << j+1 << nl;
                }
                return 0;
            }
        }
    }
    rep(i,0,h){
        rep(j,0,w-5+1){
            if(vec[i][j]=='s' && vec[i][j+1]=='n' && vec[i][j+2]=='u' && vec[i][j+3]=='k' && vec[i][j+4]=='e'){
                rep(k,0,5){
                    cout << i+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
            else if(vec[i][j]=='e' && vec[i][j+1]=='k' && vec[i][j+2]=='u' && vec[i][j+3]=='n' && vec[i][j+4]=='s'){
                rrep(k,4,0){
                    cout << i+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
        }
    }
    rep(i,0,h-5+1){
        rep(j,0,w-5+1){
            if(vec[i][j]=='s' && vec[i+1][j+1]=='n' && vec[i+2][j+2]=='u' && vec[i+3][j+3]=='k' && vec[i+4][j+4]=='e'){
                rep(k,0,5){
                    cout << i+k+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
            else if(vec[i][j]=='e' && vec[i+1][j+1]=='k' && vec[i+2][j+2]=='u' && vec[i+3][j+3]=='n' && vec[i+4][j+4]=='s'){
                rrep(k,4,0){
                    cout << i+k+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
        }
    }

    rep(i,4,h){
        rep(j,0,w-5+1){
            if(vec[i][j]=='s' && vec[i-1][j+1]=='n' && vec[i-2][j+2]=='u' && vec[i-3][j+3]=='k' && vec[i-4][j+4]=='e'){
                rep(k,0,5){
                    cout << i-k+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
            else if(vec[i][j]=='e' && vec[i-1][j+1]=='k' && vec[i-2][j+2]=='u' && vec[i-3][j+3]=='n' && vec[i-4][j+4]=='s'){
                rrep(k,4,0){
                    cout << i-k+1 << " " << j+k+1 << nl;
                }
                return 0;
            }
        }
    }
}