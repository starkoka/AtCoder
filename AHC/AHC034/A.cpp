/* I am kokastar
                                     .!!!(*(("""((!!!!!!!!!'`          ```..```
`..`````                         `!""!!!.```    ``.'!!!'!!!!"I!'                ````````
           `````                !(! ``                        !!""*!-
                  `.````                                          `!(3*`
              `  ` .("!!!*"' ````````                                 !(""!-
               ` '""'````           `..``````                            `'(%!  `
             ` `"". ` `                       ``.```````                  `` !%! ``
              '$!`                                   ```````````          `    !3!  `
           ` (3`            '"(`         ``  .!`               `` ```  .`        (3.
          ` u"             `$!          `#I !"$!.$$j!                      ````  `'$' `
```````` .$!              !$          .$$#j"``("! !$.          `                 `'#.``..
         !$! .`..`       !!"!         .t!``       ` "I                 !.           "j
    ` ` ""`       ```..`"$'%!         "!            '%` ` ""%'         !$'          !#`
 ` ```!&!      `   `   (+  (3```..`` *!             `$.  .%`""          !3         ` $(
    `"+` ``!!`        '$"(""#! `   `!"``..````      .$` `I! !$          '#         ` "%
   !"'!!""3#!    `   `$"!!!'(#!    .u.        ````.`!$``j!  '$+*""*!! ` !%           !#`
`!$%""!' `$!      ` `"$!!!!!*(""`  !" `           ` (".u! ` !#%"""I"#&  $!            #!
'!!`  `  !$        ` I! ``     !u(-$!``            .3"I'    I*'... .!! ($.            $!
         !$     `   !z` `!!(!!`  '(#'```         ` (#(.   !###$$$$#z!.!j!% ` ``.``` ` %*
```````` `$!     !- 3!!%$%j"$##t   `              ` `     "#!(#'!!!!u#$ '$.         ``%+``
       ```!#'```!#"'$#!   '#%3*$'  `                      !!`##$"!"I"+I`'$`   `       $!
           !$- !$'3$#!`.. $(%!%!#'`   `                   ` .#%#$#3J$-  '$  !+       '$`
            !$!#!`'##`   !$%*$'I#( ```       `   `` `       .$$###$($'  ("  "!      `%!
            `-%!  .#!    .##%#"%#( ` '"`!""""u( *#$.        `#%!!!!%u   J! !$"(z! ` !3
                   $!('   "#!` '#.   "%$.!"++*(*!$#( ` .     !%!.`!$. -!$`'""###!  !#!
                  `%"#! `  !$("$!   !%!#.        *%"j-.  `` .`.!""!`.!##!'%.  `"I.!""
                   j"!$3!!.` ..`'!"#$*('  '' `    !u"$$"!!!!!'''!(3#$#(&!%.`` `"" !!  `
                   $+  `!!"%$$$%"(!` `    !!`    `` `!!!(!((((!(!!!!. +#( `` !3!`'``` `
`````              #!  `                                         ` ``.z!  .("!        ````
      `.```````` ` $z .`!!'  `                                    -"""""!.'- `
                `` .$3!$$*!$'                                     !I"""!!$! ` ``
                     !##!(I!. .`````         `-!!!!                     "$u! `
                      `!!"u*!`       ``.``.#"(!!!!%"     `       .``!!""#(`
                         ` '!"""!` `  ` ` `*%!!.` %+``  ``'!!"""""-`!` !z
                               `!IJ"(!`     `'- .!!!(""""3$!!` ``...` .$.
                                    -!"jI"*(I"3"+!!-`   !$'`!"*+""!!((3u```
                                   . `  $(```          .$..` ``   `          .-``````
`````                          .!!! .! !#` ` `       ` '$.!"""!!`                     ````
   ``````````               !""!!'' !#($$"!!!'`    .'!(%%'    .!*"!. `
              ```````.. ` `!$`     `j#!   .!!!!++j33ju"$'`  `    'I#!
                        ````!3.````'$.(t!!` `.!!"""!!!$! ` `'!!""!!`
                             .I!`  I(``.'!(((!!.    `3!   !3!'`
                               !u!!$`   `    `````` (" ` .$'
                                 !#%                $!  `'#!``` `
                                  ..                .!"(+"!`    ````.```` `

 */
#include <bits/stdc++.h>
#include <atcoder/all>
#include <fstream>
using namespace std;
using namespace atcoder;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using umap = unordered_map<int,int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vb = vector<bool>;
using vbb = vector<vector<bool>>;
using minp_queue = priority_queue<intp, vector<intp>, greater<intp>>;
using min_queue = priority_queue<int, vector<int>, greater<int>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define brep(i,a,b) for(int i=a;i<(1<<b);i++)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"
#define makep make_pair
#define INF ((1LL<<62)-(1LL<<31))
#define inf ((1<<30)-(1<<15))
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}
struct range_set {
private:
    std::set<std::pair<int, int>> s;

public:
    range_set() {
        s.emplace(INT_MIN, INT_MIN);
        s.emplace(INT_MAX, INT_MAX);
    }

    bool contains(int x) const {
        auto it = std::prev(s.lower_bound(std::make_pair(x+1, x+1)));
        auto [l, u] = *it;
        return l <= x && x <= u;
    }

    bool insert(int x) {
        auto nit = s.lower_bound(std::make_pair(x+1, x+1));
        auto it = std::prev(nit);
        auto [l, u] = *it;
        auto [nL, nu] = *nit;
        if (l <= x && x <= u) return false;
        if (u == x-1) {
            if (nL == x+1) {
                s.erase(it);
                s.erase(nit);
                s.emplace(l, nu);
            } else {
                s.erase(it);
                s.emplace(l, x);
            }
        } else {
            if (nL == x+1) {
                s.erase(nit);
                s.emplace(x, nu);
            } else {
                s.emplace(x, x);
            }
        }
        return true;
    }

    bool erase(int x) {
        auto nit = s.lower_bound(std::make_pair(x+1, x+1));
        nit = std::prev(nit);
        auto [l, u] = *nit;
        s.erase(nit);
        if(l==u){
            ;
        }else if (l == x) {
            s.emplace(l+1, u);
        } else if (u == x) {
            s.emplace(l, u-1);
        } else{
            s.emplace(l,x-1);
            s.emplace(x+1,u);
        }
        return true;
    }

    int mex(int x = 0) const {
        auto [l, u] = *std::prev(s.lower_bound(std::make_pair(x+1, x+1)));
        if (l <= x && x <= u) {
            return u+1;
        } else {
            return x;
        }
    }
};
class hashStr {
private:
    long long mod = 2147483647;
    string s="";
    vector<long long> t;
    vector<long long> H;
    vector<long long> power100;
public:
    string str() {
        return s;
    }
    void set(string st) {
        s = st;
        if(s.size() > power100.size()) {
            long long i=power100.size();
            if(power100.empty()) {
                power100.push_back(1);
                i = 1;
            }
            for(;i<=s.size();i++) {
                power100.push_back(power100[i-1] * 100LL % mod);
            }
        }
        t.clear();
        t.push_back(0);
        for(long long i=1;i<=s.size();i++) {
            t.push_back(s[i-1] - ' ' + 1);
        }
        H.clear();
        H.push_back(0);
        for(long long i=1;i<=s.size();i++) {
            H.push_back((100LL * H[i-1] + t[i]) % mod);
        }
    }
    void modSet(long long n) {
        mod = n;
        H.clear();
        power100.clear();
        set(s);
    }
    long long hash(long long l, long long r) {
        l++;r++;
        long long val = H[r] - (H[l-1] * power100[r-l+1] % mod);
        if(val<0)val+=mod;
        return val;
    }
};
#ifdef LOCAL
#  include "debug_print.hpp"
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif

__attribute__((constructor)) void constructor() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(16);
}


#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#pragma GCC target("arch=skylake-avx512")

#define LIMIT 1.95

//#define _GLIBCXX_DEBUG

//10^9は2^30を超えないよ
//llの最大値は10^19を超えないよ

//int op(int a,int b){return a+b;}
//int e(){return 0;} //op(a,e)=aが成り立つ

int n;
vii vec(20,vi(20));
vii vecInit(20,vi(20));
intp now = makep(0,0);
int dump = 0;
ll cost = 0;
int searchSiz = 0;
ll minCost = LLONG_MAX;

vector<string> cache;
vector<string> ans;

void answer(){
    fore(str,ans){
        cout << str << nl;
    }
    exit(0);
}

void go(intp start,intp goal){
    rep(i,0,abs(start.F-goal.F)){
        if(start.F>goal.F)cache.emplace_back("U");
        else cache.emplace_back("D");
        cost += 100+dump;
    }
    rep(i,0,abs(start.S-goal.S)){
        if(start.S>goal.S)cache.emplace_back("L");
        else cache.emplace_back("R");
        cost += 100+dump;
    }
}

void printn(int num){
    if(num==0)return;
    string str="";
    if(num>0){
        str = "+";
    }
    str += to_string(num);
    cache.emplace_back(str);
    cost += abs(num);
}

void solve4(intp top){
    if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
    int check = 0;
    rep(i,0,2)rep(j,0,2)if(vec[top.F+i][top.S+j]==0)check++;
    if(top != now){
        go(now,top);
        now = top;
    }

    vector<intp> next = {
            {0,1},
            {1,0},
            {0,-1},
            {-1,0},
    };
    int idx = -1;

    while(check<4){
        if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
        if(vec[now.F][now.S] > 0){
            dump += vec[now.F][now.S];
            printn(vec[now.F][now.S]);
            vec[now.F][now.S] = 0;
            check++;
        }
        else if(vec[now.F][now.S] < 0){
            int add = min(vec[now.F][now.S]*-1,dump);
            dump -= add;
            printn(0-add);
            vec[now.F][now.S] += add;
            if(vec[now.F][now.S]==0)check++;
        }

        idx = (idx+1)%4;
        intp g = makep(now.F+next[idx].F,now.S + next[idx].S);
        go(now,g);
        now = g;
    }
}

ll solveAll(vector<intp> &search){
    cache.clear();
    cost = 0;
    vec = vecInit;
    now = makep(0,0);
    rep(I,0,search.size()){
        if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
        auto [i,j] = search[I];
        go(now,{i,j});
        now = {i,j};
        int sum = dump + vec[i][j] + vec[i+1][j] + vec[i][j+1] + vec[i+1][j+1];
        if(sum < 0){
            intp p = search[I+1];
            go(now,p);
            now = p;
            printn(sum*-1);
            vec[p.F][p.S] += sum;
            dump -= sum;
        }
        solve4(makep(i,j));
    }
    return cost;
}

void dfs(intp p,vector<intp> &search,vbb &check){
    if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
    if(search.size()==searchSiz){
        ll nowCost = solveAll(search);
        while(true){
            int idx = cache.size()-1;
            if(cache[idx]=="U" || cache[idx]=="D" || cache[idx]=="L" || cache[idx]=="R"){
                cache.pop_back();
                nowCost -= 100;
                continue;
            }
            break;
        }
        if(chmin(minCost,nowCost)){
            ans = cache;
        }
        return;
    }

    if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
    vector<intp> next = {
            {2,0},
            {0,2},
            {-2,0},
            {0,-2},
    };
    rep(i,0,4){
        if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();
        int nx = p.F + next[i].F;
        int ny = p.S + next[i].S;

        if (nx < 0 || nx >= n || ny < 0 || ny >= n || check[nx][ny]) continue;
        check[nx][ny] = true;
        search.emplace_back(nx,ny);

        dfs({nx,ny},search,check);
        if(clock() >=  LIMIT*CLOCKS_PER_SEC)answer();

        check[nx][ny] = false;
        search.pop_back();
    }
}

int main() {
    cin >> n;
    vector<intp> plus;
    vector<intp> minus;
    rep(i,0,n){
        rep(j,0,n){
            cin >> vecInit[i][j];
        }
    }

    {
        vector<intp> search;
        for(int i=0;i<n;i+=2){
            if(i%4==0){
                for(int j=0;j<n;j+=2){
                    search.emplace_back(i,j);
                }
            }
            else{
                for(int j=n-2;j>=0;j-=2){
                    search.emplace_back(i,j);
                }
            }
        }

        searchSiz = search.size();

        ll nowCost = solveAll(search);
        while(true){
            int idx = cache.size()-1;
            if(cache[idx]=="U" || cache[idx]=="D" || cache[idx]=="L" || cache[idx]=="R"){
                cache.pop_back();
                nowCost -= 100;
                continue;
            }
            break;
        }
        if(chmin(minCost,nowCost)){
            ans = cache;
        }
    }
    {
        vector<intp> search;
        for(int j=0;j<n;j+=2){
            if(j%4==0){
                for(int i=0;i<n;i+=2){
                    search.emplace_back(i,j);
                }
            }
            else{
                for(int i=n-2;i>=0;i-=2){
                    search.emplace_back(i,j);
                }
            }
        }

        ll nowCost = solveAll(search);
        while(true){
            int idx = cache.size()-1;
            if(cache[idx]=="U" || cache[idx]=="D" || cache[idx]=="L" || cache[idx]=="R"){
                cache.pop_back();
                nowCost -= 100;
                continue;
            }
            break;
        }
        if(chmin(minCost,nowCost)){
            ans = cache;
        }
    }
    {
        vector<intp> search;
        vector<intp> next = {
                {0,2},
                {2,0},
                {0,-2},
                {-2,0},
        };
        vbb check(n, vb(n, false));

        int x = 0, y = 0;
        int idx = 0;

        search.emplace_back(x, y);
        check[x][y] = true;

        rep(i,0,n*n/4){
            int nx = x + next[idx].F;
            int ny = y + next[idx].S;

            if (nx < 0 || nx >= n || ny < 0 || ny >= n || check[nx][ny]) {
                idx = (idx + 1) % 4;
                nx = x + next[idx].F;
                ny = y + next[idx].S;
            }

            x = nx;
            y = ny;
            search.emplace_back(x, y);
            check[x][y] = true;
        }

        ll nowCost = solveAll(search);
        while(true){
            int idx = cache.size()-1;
            if(cache[idx]=="U" || cache[idx]=="D" || cache[idx]=="L" || cache[idx]=="R"){
                cache.pop_back();
                nowCost -= 100;
                continue;
            }
            break;
        }
        if(chmin(minCost,nowCost)){
            ans = cache;
        }
    }
    {
        vector<intp> search;
        vector<intp> next = {
                {2,0},
                {0,2},
                {-2,0},
                {0,-2},
        };
        vbb check(n, vb(n, false));

        int x = 0, y = 0;
        int idx = 0;

        search.emplace_back(x, y);
        check[x][y] = true;

        rep(i,0,n*n/4){
            int nx = x + next[idx].F;
            int ny = y + next[idx].S;

            if (nx < 0 || nx >= n || ny < 0 || ny >= n || check[nx][ny]) {
                idx = (idx + 1) % 4;
                nx = x + next[idx].F;
                ny = y + next[idx].S;
            }

            x = nx;
            y = ny;
            search.emplace_back(x, y);
            check[x][y] = true;
        }

        ll nowCost = solveAll(search);
        while(true){
            int idx = cache.size()-1;
            if(cache[idx]=="U" || cache[idx]=="D" || cache[idx]=="L" || cache[idx]=="R"){
                cache.pop_back();
                nowCost -= 100;
                continue;
            }
            break;
        }
        if(chmin(minCost,nowCost)){
            ans = cache;
        }
    }


    {
        vector<intp> search;
        vbb check(n,vb(n,false));

        search.emplace_back(0,0);
        check[0][0] = true;
        dfs({0,0},search,check);
    }
    {
        vector<intp> search;
        vbb check(n,vb(n,false));
        dfs({0,0},search,check);
    }



    answer();
}
