#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,c,t;
    cin >> n >> c;
    cin >> t;
    for(int i=1;i<n;i++){
        int nt;
        cin >> nt;
        if(nt-t <= c){
            cout << nt << endl;
            return 0;
        }
        t = nt;
    }
    cout << "-1" << endl;
}
