#include <bits/stdc++.h>
using namespace std;

int main() {
    double X=0,Z=0;
    cin>>X;
    int Y=X*1000;
    Y=Y%1000;
    Z=(double)Y/1000;
    if(Z>=0.5){cout<<X-Z+1;}
    else{cout<<X-Z;}
}