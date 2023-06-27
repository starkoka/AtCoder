#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s,t;
    cin >> n >> s >> t;

    for(int i = 0; i < n; i++){
        if(s[i] == t[i]){

        }
        else if(s[i] == '1' || s[i] == 'l'){
            if(t[i] == '1' || t[i] == 'l'){

            }
            else{
                cout << "No" << endl;
                return 0;
            }
        }
        else if(s[i] == '0' || s[i] == 'o'){
            if(t[i] == '0' || t[i] == 'o'){

            }
            else{
                cout << "No" << endl;
                return 0;
            }
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}