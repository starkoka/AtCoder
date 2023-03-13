#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,y,a,b=0,c=0;
    cin>>n>>y;
    a = y / 1000;
    if(a+b+c==n){
        cout << a << " " << b << " " << c << endl;
        return 0;
    }

    for(int j=0;j<(y-5000*b)/10000;j++){
        if(a+b+c==n){
            cout << c << " " << b << " " << a << endl;
            return 0;
        }
        a -= 10;
        c += 1;
    }

    for(int i=0;i<y/5000;i++){
        if(a+b+c==n){
            cout << c << " " << b << " " << a << endl;
            return 0;
        }
        c = 0;
        a -= 5;
        b += 1;
        for(int j=0;j<(y-5000*b)/10000;j++){
            if(a+b+c==n){
                cout << c << " " << b << " " << a << endl;
                return 0;
            }
            a -= 10;
            c += 1;
        }
    }
    cout <<"-1 -1 -1"<< endl;
}
