#include <bits/stdc++.h>
using namespace std;


int main(void){
    string s;
    int64_t h=0,ans=0;
    cin >>s;

    for(int i = 0; i <s.size(); i++){
        if(s[i] == '0'){
            if(h == 1){
                h = 0;
                ans ++;
            }
            else{
                h = 1;
            }
        }
        else{
            if(h ==1)ans++;
            ans ++;
            h = 0;
        }
    }
    if(h == 1)ans++;

    cout << ans <<endl;
}