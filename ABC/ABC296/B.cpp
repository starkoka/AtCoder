#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    vector<char> list = {'a', 'b', 'c', 'd', 'e', 'f', 'g' , 'h'};

    for(int i = 0; i < 8; i++){
        string s;
        cin >> s;
        for(int j = 0; j < 8; j++){
            if(s[j] == '*'){
                cout << list[j] << 8-i << endl;
            }
        }
    }
}
