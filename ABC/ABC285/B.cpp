#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s;
    cin >> n >> s;
    for(int i=1; i<n; i++){
        int j;
        for(j=0;j<n-i;j++){
            if(s[j] == s[j+i]){
                break;
            }
        }
        cout << j << endl;

    }
