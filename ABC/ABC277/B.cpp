#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<string> s(n);

    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i].at(0)!='H' && s[i].at(0)!='D'&& s[i].at(0)!='C'&& s[i].at(0)!='S'){
            cout<<"No"<<endl;
            return 0;
        }
        if(s[i].at(1)=='A' || s[i].at(1)=='2'|| s[i].at(1)=='3'|| s[i].at(1)=='4' || s[i].at(1)=='5' || s[i].at(1)=='6'|| s[i].at(1)=='7'|| s[i].at(1)=='8' || s[i].at(1)=='9' || s[i].at(1)=='T'|| s[i].at(1)=='J'|| s[i].at(1)=='Q'|| s[i].at(1)=='K'){

        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
        for(int j=0;j<i;j++){
            if(s[j]==s[i]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;

}