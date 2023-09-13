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
    int n,k,q;
    cin >> n >> k >> q;
    vector<bool> vec(201,false);
    vi a(k);
    rep(i,0,k){
        cin >> a[i];
        vec[a[i]] = true;
    }

    rep(i,0,q){
        int l;
        cin >> l;
        if(a[l-1]!=n){
            if(!vec[a[l-1]+1]){
                vec[a[l-1]]=false;
                vec[a[l-1]+1]=true;
                a[l-1]++;
            }
        }
    }

    int flag = false;
    rep(i,0,k){
        if(i!=0)cout << " ";
        cout << a[i];
    }
    cout << nl;
}