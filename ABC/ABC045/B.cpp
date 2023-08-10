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
    string a,b,c;
    cin >> a >> b >> c;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    reverse(c.begin(),c.end());

    char now = 'a';
    while(1==1){
        if(now=='a'){
            if(a.size()==0)break;
            now = a[a.size()-1];
            a.pop_back();
        }
        else if(now=='b'){
            if(b.size()==0)break;
            now = b[b.size()-1];
            b.pop_back();
        } else{
            if(c.size()==0)break;
            now = c[c.size()-1];
            c.pop_back();
        }
    }
    printf("%c\n",now-'a'+'A');
}