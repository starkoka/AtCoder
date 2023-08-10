#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define brep(i,n) for(int i=0, i##_len=((1<<n)); i<i##_len; ++i)
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"

int main(){
    int n,all=0,ans=0;
    cin >> n;

    vi a(n);
    rep(i,n){
        cin >> a[i];
        all += a[i];
    }

    if(all%n!=0){
        cout << -1 << nl;
        return 0;
    }

    int one = all/n;
    int now=0,people=0;
    rep(i,n){
        now++;
        people+=a[i];
        if(people%now == 0 && people/now == one){
            now = 0;
            people = 0;
        }
        else{
            ans++;
        }
    }

    cout << ans << nl;
}