#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int n,d;
vector<int> check(vector<vector<int>> &list,int num,unordered_set<int> &cl){
    vector<int> ans;
    cl.erase(num);
    list[num][3] = 1;
    for(int i=0;i<n;i++){
        if((list[num][0] - list[i][0])*(list[num][0] - list[i][0]) + (list[num][1] - list[i][1])*(list[num][1] - list[i][1])<= d*d){
            if(cl.count(i) > 0){
                ans.push_back(i);
                cl.erase(i);
            }
        }
    }
    return ans;
}



int main() {
    cin >> n >> d;
    vector<vector<int>> list(n,vector<int>(4,0)); //x,y,チェック,有無
    unordered_set<int> cl;

    for(int i=0;i<n;i++){
        cin >> list[i][0] >> list[i][1];
        cl.insert(i);
    }
    vector<int> v;
    v.push_back(0);

    while(v.size()>0){
        vector<int> w = v;
        v = {};
        for(int i=0;i<w.size();i++){
            vector<int> result = check(list,w[i],cl);
            v.insert(v.end(),result.begin(),result.end());
        }
    }


    for(int i=0;i<n;i++){
        if(list[i][3] == 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }



}
