#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]!= 0){
            a[a[i]-1] = 0;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]!= 0){
            b.push_back(i+1);
        }
    }
    sort(b.begin(), b.end());
    cout << b.size() << endl;
    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout <<endl;
    return 0;
}
