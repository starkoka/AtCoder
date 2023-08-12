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
#define brep(i,n) for(int i=0, i##_len=((1<<n)); i<i##_len; ++i)
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"

int main(){
    int n,m;
    cin >> n >> m;
    map<int,vector<pair<char,int>>> list;
    string s;
    cin >> s;
    rep(i,n){
        int c;
        cin >> c;
        pair<char,int> p = make_pair(s[i],i);
        list[c].push_back(p);
    }
    char ans[s.size()+1];
    ans[s.size()] = '\0';

    rep(i,m){
        vector<pair<char,int>> color = list[i+1];
        rep(j,color.size()){
            if(color.size()==1){
                ans[color[0].S] = color[0].F;
            }
            else{
                int num = j+1;
                int num2 = j+2;
                if(num>=color.size())num-=color.size();
                if(num2>=color.size())num2-=color.size();
                ans[color[num2].S] = color[num].F;
            }
        }
    }

    printf("%s\n",ans);

}
