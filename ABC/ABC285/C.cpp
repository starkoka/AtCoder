#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    int64_t x=1,ans=0;
    cin >> s;
    vector<char> list = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};
    for(int64_t i=0; i<s.size();i++){
        int64_t j=0;
        for(; j<list.size();j++){
            if(list[j]==s[s.size()-i-1])break;
        }
        ans += (j+1)*x;
        x *= list.size();
    }
    cout << ans <<endl;
}