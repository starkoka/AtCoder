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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<intp> a(n),b,c;
    vi ans,bScore(n),allScore(n);
    rep(i,0,n){
        cin >> a[i].F;
        a[i].F = 100-a[i].F;
        allScore[i] = a[i].F;
        a[i].S=i+1;
    }
    rep(i,0,n){
        cin >> bScore[i];
        bScore[i] = 100-bScore[i];
        allScore[i] += bScore[i];
    }
    sort(all(a));

    rep(i,0,n){
        if(i<x){
            ans.push_back(a[i].S);
        }
        else{
            b.push_back(make_pair(bScore[a[i].S-1],a[i].S));
        }
    }
    sort(all(b));

    rep(i,0,b.size()){
        if(i<y){
            ans.push_back(b[i].S);
        }
        else{
            c.push_back(make_pair(allScore[b[i].S-1],b[i].S));
        }
    }
    sort(all(c));
    rep(i,0,z){
        ans.push_back(c[i].S);
    }

    sort(all(ans));
    fore(i,ans){
        cout << i << nl;
    }
}