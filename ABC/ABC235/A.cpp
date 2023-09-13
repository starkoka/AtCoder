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
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"


string abc;
int sToN(int n){
    return abc[n]-'0';
}

int main() {
    cin >> abc;
    cout << sToN(0)*100+sToN(1)*10+sToN(2) + sToN(1)*100+sToN(2)*10+sToN(0) + sToN(2)*100+sToN(0)*10+sToN(1) << nl;
}