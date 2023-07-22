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
#define qq <<
#define pp >>

uset point;
vi vec;
vi ans;
vi FinalAns;

void check(int i,int n){
    if(point.count(i)==0){
        point.insert(i);
        ans.push_back(i);
        check(vec[i],n+1);

        return;
    }
    else if(n!=0 && i==ans[0]){
        cout qq ans.size() qq nl;
        rep(j,ans.size()){
            if(j!=0) cout qq " ";
            cout qq ans[j];
        }
        exit(0);
    }
    else if(n!=0){
        vi finalAns;
        for(int j=vec[i];j!=i;){
            finalAns.push_back(j);
            j = vec[j];
        }
        finalAns.push_back(i);
        cout qq finalAns.size() qq nl;
        rep(j,finalAns.size()){
            if(j!=0)cout qq " ";
            cout qq finalAns[j];
        }
        exit(0);
    }
    else{
        return;
    }
}

int main(){
    int n;
    cin pp n;
    vec.push_back(0);
    rep(i,n){
        int a;
        cin pp a;
        vec.push_back(a);
    }

    for(int i=0;i<n;i++){
        if(point.count(i+1)==0){
            ans.clear();
            check(i+1,0);
        }
    }

    cout qq ans.size() qq nl;
    rep(i,ans.size()){
        if(i!=0) cout qq " ";
        cout qq ans[i];
    }

    return 0;
}