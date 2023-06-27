#include <bits/stdc++.h>
using namespace std;

int check(string s){
    for(int i=1; i<=s.length(); i++){
        if(s[i-1] != s[s.length()-i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string S = s[i]+s[j];
            if(check(S)==1 && i!=j){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
