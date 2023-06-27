#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> list(3*n);
    for(int i =0;i<3*n;i++){
        int a;
        cin >> a;
        list[i] = make_pair(a,i);
    }
    sort(list.begin(),list.end());

    vector<pair<int,int>> f(n);
    for(int i = 0;i<n;i++){
        f[i] = make_pair(list[i*3+1].second,list[i*3+1].first);
    }
    sort(f.begin(),f.end());

    for(int i = 0;i<n;i++){
        cout << f[i].second << " ";
    }
    cout << endl;

}
