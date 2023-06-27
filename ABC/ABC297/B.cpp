#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int bf=-1,bs=-1,rf=-1,rs=-1,k=-1;
    for(int i=0;i<8;i++){
        if(s[i] == 'B'){
            if(bf == -1){
                bf = i;
            }
            else{
                bs = i;
            }
        }
        else if(s[i] == 'R'){
            if(rf == -1){
                rf = i;
            }
            else{
                rs = i;
            }
        }
        else if(s[i] == 'K'){
            k = i;
        }

    }
    if(bf%2 != bs % 2 && rf < k && k < rs){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No" << endl;
    };
}
