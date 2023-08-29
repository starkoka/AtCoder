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
    int n;
    unordered_set<string> word;
    cin >> n;
    char c;
    rep(i,n){
        string s;
        cin >> s;
        if(i!=0){
            if(s[0]!=c){
                cout << "No" << nl;
                return 0;
            }
        }
        if(word.count(s)){
            cout << "No" << nl;
            return 0;
        }
        word.insert(s);
        c = s[s.size()-1];
    }
    cout << "Yes" << nl;
}
