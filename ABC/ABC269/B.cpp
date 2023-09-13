#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;
int main(void){
    char s;
    int a=1,b=1,c=1,d=1,e=0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin>>s;
            if(s=='#'){
                if(e==0){a=i+1;c=j+1;e=1;}
                b=i+1;
                d=j+1;
            }
        }

    }
    cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
    return 0;
}
