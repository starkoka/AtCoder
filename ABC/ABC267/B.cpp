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
    string s;
    cin >> s;
    s = 'k'+s;
    if(s[1]=='1'){
        cout << "No" << nl;
    }
    else{
        vi vec(7);
        vec[0]=(s[7]=='0'?0:1);
        vec[1]=(s[4]=='0'?0:1);
        vec[3]=(s[5]=='0'?0:-1);
        vec[5]=(s[6]=='0'?0:1);
        vec[6]=(s[10]=='0'?0:1);
        if(s[2]==s[8])vec[2]=(s[2]=='0'?0:1);
        else vec[2]=-1;
        if(s[3]==s[9])vec[4]=(s[3]=='0'?0:1);
        else vec[4]=-1;

        rep(i,0,6){
            if(vec[i]==1){
                rep(j,1+i,7){
                    if(vec[j]==1){
                        rep(k,i+1,j){
                            if(vec[k]==0){
                                cout << "Yes" << nl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
        cout << "No" << nl;
    }
}