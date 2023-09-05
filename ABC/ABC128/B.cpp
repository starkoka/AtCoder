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


int main(){
    int n;
    cin >> n;
    vector<tuple<string,int,int>> vec(n);
    rep(i,0,n){
        tuple<string,int,int> sp;
        string s;
        int p;
        cin >> s >> p;
        vec[i] = make_tuple(s,INT_MAX-p,i+1);
    }
    sort(all(vec));
    rep(i,0,n){
        int num,x;
        string y;
        tie(y,x,num) = vec[i];
        cout << num << nl;
    }
}
