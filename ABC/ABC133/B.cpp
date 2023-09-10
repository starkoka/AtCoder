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
    int n,d,ans=0;
    cin >> n >> d;
    vii vec(n,vi(d));
    rep(i,0,n){
        rep(j,0,d){
            cin >> vec[i][j];
        }
    }

    rep(i,0,n-1){
        rep(j,i+1,n){
            double num=0;
            rep(k,0,d){
                num += pow(vec[i][k]-vec[j][k],2);
            }
            int num2 = (int)sqrt(num);
            if(num == num2*num2){
                ans++;
            }
        }
    }
    cout << ans << nl;
}