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

vi a;
vi b;

int sell(int price){
    return upper_bound(a.begin(),a.end(),price) - a.begin();
}

int buy(int price){
    return b.size() - (lower_bound(b.begin(),b.end(),price) - b.begin());
}

int main(){
    int n;
    cin >> n;
    if(n==0 || n%1111==0){
        cout << "SAME" << nl;
    }
    else{
        cout << "DIFFERENT" << nl;
    }
}