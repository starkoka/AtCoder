#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x=0;
    cin>>n;
    while(x*x<=n){
        x++;
    }
    cout<<(x-1)*(x-1)<<endl;
}
