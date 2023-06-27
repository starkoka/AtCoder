#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        if(c == a+b){
            cout << i+1 << endl;
        }
    }


}
