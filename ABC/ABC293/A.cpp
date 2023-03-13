#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    for(int i=1; i<=s.length()/2; i++){
        cout << s[2*i-1] << s[i*2-2];
    }
    cout <<endl;
}
