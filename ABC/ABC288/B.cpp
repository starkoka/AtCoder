#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >>n >> k;
    vector<string> s(k);
    for(int i=0;i<k;i++){
        string S;
        cin >>S;
        s[i] =S;
    }
    sort(s.begin(),s.end());
    for(int i=0;i<k;i++){
        cout << s[i] <<endl;
    }
}