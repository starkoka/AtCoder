#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%5 > 2.5){
        cout << (n+5)/5*5 << endl;
    }
    else{
        cout << n/5*5 << endl;
    }
}
