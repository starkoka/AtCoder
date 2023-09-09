#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main(void) {
    int N,n;
    cin >> N;
    n = N;
    vector<int> vec;
    int i;
    for(i=2; i < sqrt(N) && n!=1; i++){
        while(n%i==0 && n!=1){
            n /= i;
            vec.push_back(i);
        }
    }
    if(n!=1){
        vec.push_back(n/i);
    }

    sort(vec.begin(), vec.end());
    if(vec.size() == 3){
        if((vec[0]==vec[1] || vec[1]==vec[2]) && vec[0]!=vec[2]){
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