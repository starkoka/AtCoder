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
    int n,k;
    string s;
    cin >> n >> k >> s;

    vi vec;
    int num=0,now=(s[0]=='1'?0:1);
    if(s[0]=='0')vec.push_back(0);
    vec.push_back(0);
    rep(i,0,n){
        num++;
        vec[now]=num;
        if(s[num]!=s[num-1]){
            now ++;
            if(i!=n-1)vec.push_back(0);
        }
    }

    int ans = INT_MAX*-1;
    for(int left=0;left<vec.size();left+=2){
        int right = left + 2*k;
        if(right>=vec.size())right=vec.size()-1;
        ans = max(ans,vec[right]-(left==0 ? 0 : vec[left-1]));
    }

    cout << ans << nl;
    return 0;
}
