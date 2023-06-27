#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,min = 1000000000,j=0;
    cin >> n;
    vector<pair<string,int>> list(n);
    for(int i=0;i<n;i++) {
        cin >> list[i].first >> list[i].second;
        if(list[i].second < min){
            j = i;
            min = list[i].second;
        }
    }
    for(int i=j;i<n;i++){
        cout << list[i].first << endl;
    }
    for(int i=0;i<j;i++){
        cout << list[i].first << endl;
    }

    return 0;
}
