#include <bits/stdc++.h>
using namespace std;


int main(void){
    int k,m;
    cin>>k;

    //因数分解
    vector<vector<int>> arr(0,vector<int> (0));
    int temp = k;
    for(int i=2;i<int(int(-(pow(-k,0.5)/1)))+2;i++){
        if(temp%1==0){
            int cnt = 0;
            while(temp%i == 0){
                cnt ++;
                temp = int(temp/i);
            }
            arr.push_back({i,cnt});
        }
    }
    if(temp!=1){
        arr.push_back({temp,1});
    }
    if(arr.size()==0){
        arr.push_back({k,1});
    }

    for(int i=0;i<arr.size();i++){
        if(arr[arr.size()-1-i][1] == 1){
            arr[arr.size()-1-i][1] --;
            m = max(m,arr[arr.size()-1-i][0]);
        }
        else{
            arr[arr.size()-1-i][1] --;
            for(int j=0;j<arr.size()-i;j++){
                if(arr[j][1] >= 1){
                    arr[j][1]--;
                    m = max(m,arr[j][1]*arr[arr.size()-1-i][0]);
                }
            }
        }
    }
    cout<<m<<endl;

}