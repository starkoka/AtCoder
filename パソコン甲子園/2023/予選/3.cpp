#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main(void) {
    int b;
    cin >> b;
    while(b != 1){
        cout << b << nl;
        b /= 2;
    }
    cout << b << nl;
}