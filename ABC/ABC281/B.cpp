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
#define LL_MAX 9223372036854775807

int main() {
    string s;
    cin >> s;
    int i=0;
    vi count(3,0);

    for(;i<s.size();i++) {
        if(s[i]>='A' && s[i]<='Z'){
            count[0]++;
        }
        else{
            break;
        }
    }
    for(;i<s.size();i++) {
        if(s[i]>='0' && s[i]<='9'){
            count[1]++;
        }
        else{
            break;
        }
    }
    for(;i<s.size();i++) {
        if(s[i]>='A' && s[i]<='Z'){
            count[2]++;
        }
        else{
            break;
        }
    }

    if(count[0]==1 && count[1]==6 && count[2]==1){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}