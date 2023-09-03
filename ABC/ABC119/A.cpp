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


int main() {
    string s;
    cin >> s;
    int n =(s[5]-'0')*1000 + (s[6]-'0')*100 + (s[8]-'0')*10 +  (s[9]-'0');
    cout << (n<=430 ? "Heisei" : "TBD") << nl;

}
