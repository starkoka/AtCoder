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
#define qq <<
#define pp >>



int main(){
    int n,m,ans=0;
    cin pp n pp m;
    vii list(m,vi(0));
    vi p(m);

    rep(i,m){
        int k;
        cin pp k;
        rep(j,k){
            int s;
            cin pp s;
            list[i].push_back(s);
        }
    }
    rep(i,m)cin pp p[i];

    brep(i,n){
        bitset<10> b(i);
        int light=0;
        rep(j,m){
            int flag = 0;
            for(int k:list[j]){
                if(b.test(k-1)){
                    flag++;
                }
            }
            if(flag%2 == p[j]){
                light ++;
            }
            else{
                break;
            }
        }

        if(light == m){
            ans ++;
        }
    }

    cout qq ans qq nl;
}