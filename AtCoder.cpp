#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,ans;
    vector<vector<int>> data(1, vector<int>(1));
    vector<int> key(1);
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
        cin>>b.at(i);

        std::vector<int>::iterator itr;
        itr = std::find(key.begin(), key.end(), a.at(i));
        if (itr == key.end()) {
            std::cout << "search failed" << std::endl;
        }
        else{

        }
        const int wanted_index = std::distance(vec.begin(), itr);

    }


    cout<<ans<<endl;
}