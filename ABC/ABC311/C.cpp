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

vi graph;
vi ans;
uset point;


void loop(int start,int now,int count){
    ans.push_back(now+1);
    if(start == graph[now]){
        cout << count << nl;
    }
    else{
        loop(start,graph[now],count+1);
    }
}

void check(int num){
    if(point.count(num)){
        loop(num,num,1);
    }
    else{
        point.insert(num);
        check(graph[num]);
    }
}

int main(){
    int n;
    cin >> n;
    rep(i,n){
        int a;
        cin >> a;
        graph.push_back(a-1);
    }
    check(0);

    for(int i=0;i<ans.size();i++){
        if(i!=0)cout << " ";
        cout << ans[i];
    }
}