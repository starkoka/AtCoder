#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            cout << "No"<<endl;
            return 0;
        }
    }
    cout << "Yes"<<endl;
    return 0;
}
