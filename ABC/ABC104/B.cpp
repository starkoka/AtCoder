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
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"

int main() {
    string s;
    cin >> s;
    if(s[0]!='A'){
        cout << "WA" << nl;
        return 0;
    }

    bool C = false;
    for(int i=1;i<s.size();i++){
        if(i>=2 && i<=s.size()-2 && s[i]=='C'){
            if(C){
                cout << "WA" << nl;
                return 0;
            }
            else{
                C = true;
            }
        }
        else{
            if(s[i] < 'a' || s[i] > 'z'){
                cout << "WA" << nl;
                return 0;
            }
        }
    }

    if(C){
        cout << "AC" << nl;
    }
    else{
        cout << "WA" << nl;
    }
}
