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
    int n,a,b,place=0;
    cin >> n >> a >> b;
    rep(i,n){
        string s;
        int d;
        cin >> s >> d;
        if(d<a){
            place += a*(s=="East" ? 1:-1);
        }
        else if(d>b){
            place += b*(s=="East" ? 1:-1);
        }
        else{
            place += d*(s=="East" ? 1:-1);
        }
    }

    if(place>0){
        cout << "East ";
    }
    else if(place<0){
        cout << "West ";
    }
    cout << (place<0? place*-1 : place) <<nl;
}