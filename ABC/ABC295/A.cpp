#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s == "and" || s == "not" || s == "that" || s == "the" || s == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}
