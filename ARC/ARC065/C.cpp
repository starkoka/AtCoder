#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;

    for(int i=1; i<=s.size(); i++){
        if(s[s.size()-i-4] == 'e' && s[s.size()-i-3] == 'r' && s[s.size()-i-2] == 'a' && s[s.size()-i-1] == 's' && s[s.size()-i] == 'e'){
            i += 4;
        }
        else if(s[s.size()-i-5] == 'e' && s[s.size()-i-4] == 'r' && s[s.size()-i-3] == 'a' && s[s.size()-i-2] == 's' && s[s.size()-i-1] == 'e' && s[s.size()-i] == 'r'){
            i += 5;
        }
        else if(s[s.size()-i-4] == 'd' && s[s.size()-i-3] == 'r' && s[s.size()-i-2] == 'e' && s[s.size()-i-1] == 'a' && s[s.size()-i] == 'm'){
            i += 4;
        }
        else if(s[s.size()-i-6] == 'd' && s[s.size()-i-5] == 'r' && s[s.size()-i-4] == 'e' && s[s.size()-i-3] == 'a' && s[s.size()-i-2] == 'm' && s[s.size()-i-1] == 'e' && s[s.size()-i] == 'r'){
            i += 6;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
