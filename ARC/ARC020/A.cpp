#include <bits/stdc++.h>
using namespace std;
int main() {
    int  A=0,B=0;
    cin>>A>>B;
    if(A<0){A*=-1;}
    if(B<0){B*=-1;}
    if(A<B){cout<<"Ant"<<endl;}
    else if(A>B){cout<<"Bug"<<endl;}
    else {cout<<"Draw"<<endl;}
}