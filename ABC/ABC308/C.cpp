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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

bool asc_desc(pair<long double, int>& left, pair<long double, int>& right) {
    if (left.first == right.first) {
        return right.second < left.second;
    } else {
        return left.first  < right.first;
    }
}

int main(void){
    int n;
    cin pp n;
    vector<pair<long double,int>> list(n);

    rep(i,n){
        long double a,b;
        cin pp a pp b;
        list[i] = make_pair(a/(a+b),i);
    }

    sort(list.rbegin(),list.rend(),asc_desc);
    rep(i,n){
        cout qq list[i].S+1 qq " ";
    }
    cout qq nl;
}