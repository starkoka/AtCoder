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
    int rate;
    if(s=="tourist"){
        rate = 3858;
    }
    else if(s=="ksun48"){
        rate = 3679;
    }
    else if(s=="Benq"){
        rate = 3658;
    }
    else if(s=="Um_nik"){
        rate = 3648;
    }
    else if(s=="apiad"){
        rate = 3638;
    }
    else if(s=="Stonefeang"){
        rate = 3630;
    }
    else if(s=="ecnerwala"){
        rate = 3613;
    }
    else if(s=="mnbvmar"){
        rate = 3555;
    }
    else if(s=="newbiedmy"){
        rate = 3516;
    }
    else if(s=="semiexp"){
        rate = 3481;
    }
    cout << rate << nl;
}