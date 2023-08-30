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
    int n,k;
    cin >> n >> k;
    vi left(n/2),right(n-n/2);
    rep(i,left.size()){
        cin >> left[i];
    }
    rep(i,right.size()){
        cin >> right[i];
    }

    uset l,r;
    vi vec;

    rep(i,1<<left.size()){
        bitset<15> b(i);
        int all = 0;
        rep(j,left.size()){
            if(b.test(j)){
                all += left[j];
            }
        }
        if(!l.count(all)){
            l.insert(all);
            vec.push_back(all);
        }
    }

    rep(i,1<<right.size()){
        bitset<15> b(i);
        int all = 0;
        rep(j,right.size()){
            if(b.test(j)){
                all += right[j];
            }
        }
        r.insert(all);
    }

    rep(i,vec.size()){
        if(r.count(k-vec[i])){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}
