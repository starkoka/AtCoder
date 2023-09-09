#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main(void) {
    int d,x,y;
    cin >> d >> x >> y;
    cout << (abs(x)+abs(y) <= d ? "Yes":"No") << nl;
}