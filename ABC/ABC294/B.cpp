#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h,w;
    cin >> h >> w;
    vector<char> list = {'.','A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int a;
            cin >> a;
            cout << list[a];
        }
        cout << endl;
    }
}
