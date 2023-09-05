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
    bool YYMM=false,MMYY=false;
    if(n/100 >= 1 && n/100 <= 12)MMYY=true;
    if(n%100 >= 1 && n%100 <= 12)YYMM=true;

    if(YYMM && MMYY)cout << "AMBIGUOUS" << nl;
    else if(YYMM)cout << "YYMM" << nl;
    else if(MMYY)cout << "MMYY" << nl;
    else cout << "NA" << nl;
}
