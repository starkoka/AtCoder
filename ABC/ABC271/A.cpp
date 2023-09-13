#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    char a,b;
    if(n/16<10){
        a='0'+(n/16);
    }
    else if(n/16==10){
        a='A';
    }
    else if(n/16==11){
        a='B';
    }
    else if(n/16==12){
        a='C';
    }
    else if(n/16==13){
        a='D';
    }
    else if(n/16==14){
        a='E';
    }
    else if(n/16==15){
        a='F';
    }
    if(n%16<10){
        b='0'+(n%16);
    }
    else if(n%16==10){
        b='A';
    }
    else if(n%16==11){
        b='B';
    }
    else if(n%16==12){
        b='C';
    }
    else if(n%16==13){
        b='D';
    }
    else if(n%16==14){
        b='E';
    }
    else if(n%16==15){
        b='F';
    }

    cout<<a<<b<<endl;
}