#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2==0){
            even.push_back(a);
        }
        else{
            odd.push_back(a);
        }
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    if(even.size()==1 && odd.size()==1){
        cout<<"-1"<<endl;
        return 0;
    }
    else if(even.size()<=1){
        cout<<odd.at(odd.size()-1)+odd.at(odd.size()-2)<<endl;
    }
    else if(odd.size()<=1){
        cout<<even.at(even.size()-1)+even.at(even.size()-2)<<endl;
    }
    else{
        cout<<max(odd.at(odd.size()-1)+odd.at(odd.size()-2),even.at(even.size()-1)+even.at(even.size()-2))<<endl;
    }
    return 0;
}
