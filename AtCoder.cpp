#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define F first
#define S second
#define intp pair<int,int>

int main(void) {
    vector<intp > vec(4);
    for (int i = 0; i < 4; i++) {
        cin >> vec[i].F >> vec[i].S;
    }
    if((vec[0].F-vec[2].F)*(vec[0].F-vec[2].F) + (vec[0].S-vec[2].S)*(vec[0].S-vec[2].S) == (vec[1].F-vec[3].F)*(vec[1].F-vec[3].F) + (vec[1].S-vec[3].S)*(vec[1].S-vec[3].S)){
        if((vec[0].F-vec[2].F) * (vec[1].S-vec[3].S) * -1 == (vec[1].F-vec[3].F) * (vec[0].S-vec[2].S)){
            cout << "Yes" << nl;
        }
        else if((vec[0].F == vec[2].F && vec[1].S == vec[3].S) || (vec[1].F == vec[3].F && vec[0].S == vec[2].S)){
            cout << "Yes" << nl;
        }
        else{
            cout << "No" << nl;
        }
    }
    else{
        cout << "No" << nl;
    }
}