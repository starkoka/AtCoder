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
    int n;
    cin >> n;
    map<int,int> list,list2;
    int m = 0,sMax=0,sMaxF=-1;
    uset fset;
    vi fvec;
    rep(i,n){
        int f,s;
        cin >> f >> s;
        if(sMax < s){
            sMax = s;
            sMaxF = f;
        }
        if(list.count(f)!=0){
            intp l = make_pair(list[f],list2[f]);
            if(l.F < s){
                list[f] = s;
                list2[f] = l.F;
                m = max(m,s+l.F/2);
            }
            else if(l.S < s){
                list[f] = l.F;
                list2[f] = s;
                m = max(m,l.F+s/2);
            }
        }
        else{
            list[f] = s;
        }
        if(fset.count(f)==0){
            fset.insert(f);
            fvec.push_back(f);
        }
    }

    int ans = m;
    rep(i,fvec.size()){
        int x = fvec[i];
        if(sMaxF != x){
            ans = max(ans,sMax + list[x]);
        }
    }
    cout << ans << nl;


}
