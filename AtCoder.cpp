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
    int a,b,c;
    cin >> a >> b >> c;
    int num = (b+c)%a;
    if(num==0){
        cout << "YES" << nl;
        return 0;
    }

    int n = (b+b+c)%a;

    for(int i=3;n!=num;i++){
        if(n==0){
            cout << "YES" << nl;
            return 0;
        }
        n = (b*i+c)%a;
    }
    cout << "NO" << nl;
}