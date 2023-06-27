#include <bits/stdc++.h>
using namespace std;


int main() {
    string n;
    cin >> n;
    if(n.size()<4){
        cout << n;
    }
    else{
        cout << n[0] << n[1] << n[2];
        for(int i=0; i<n.size()-3;i++){
            cout << "0";
        }
    }
    cout << endl;

    return 0;
}
