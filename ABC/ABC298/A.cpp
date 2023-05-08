#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ok=0;
    cin >> n;
    for(int i = 0; i < n;i++){
        char s;
        cin >> s;
        if(s == 'o'){
            ok ++;
        }
        else if(s == 'x'){
            cout << "No" << endl;
            return 0;
        }
    }
    if(ok == 0){
        cout << "No" << endl;
        return 0;
    }
    else{
        cout << "Yes" << endl;
        return 0;
    }

}
