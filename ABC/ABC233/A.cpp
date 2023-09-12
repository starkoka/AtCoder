#include <bits/stdc++.h>
using namespace std;

int main() {
    int X=0,Y=0,i=0;
    cin>>X>>Y;
    while(i*10+X<Y){
        i+=1;
    }
    cout<<i<<endl;
}