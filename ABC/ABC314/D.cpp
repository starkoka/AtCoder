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
    int n,q;
    string s;
    cin >> n >> s >> q;

    bool bigOrSmall;//true == big->small
    int last = -1;
    uset list;

    rep(i,q){
        int t,x;
        char c;
        cin >> t >> x >> c;

        if(t==1){
            s[x-1] = c;
            list.insert(x-1);
        }
        else if(t==2){
            bigOrSmall = true;
            last = i;
            list.clear();
        }
        else{
            bigOrSmall = false;
            last = i;
            list.clear();
        }
    }

    if(last!=-1){
        rep(i,n){
            if(list.count(i)==0){
                if(bigOrSmall){
                    if(s[i]<='Z'){
                        s[i] += 'a'-'A';
                    }
                }
                else{
                    if(s[i]>='a'){
                        s[i] -= 'a'-'A';
                    }
                }
            }
        }
    }

    cout << s << nl;
}
