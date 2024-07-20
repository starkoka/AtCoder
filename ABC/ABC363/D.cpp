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


//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")

//#pragma GCC target("arch=skylake-avx512")

//#define _GLIBCXX_DEBUG

//10^9は2^30を超えないよ
//llの最大値は10^19を超えないよ

//int op(int a,int b){return a+b;}
//int e(){return 0;} //op(a,e)=aが成り立つ

int main() {
    vector<ll> l(36,0);
    l[1] = 10;
    l[2] = 19;
    rep(i,3,36){
        l[i] = l[i-2]*10+9;
    }

    vector<ll> pow10(18,1);
    rep(i,1,18)pow10[i] = pow10[i-1]*10;

    ll n;
    cin >> n;
    ll siz = 0;
    rep(i,0,36){
        if(n<=l[i]){
            siz = i;
            break;
        }
    }

    if(siz==1){
        cout << n-1 << nl;
        return 0;
    }

    /*
    int count = 0;
    rep(i,0,10000){
        string s = to_string(i);
        string t = s;
        reverse(all(t));
        if(s==t){
            count++;
            cout << count << " : " << s << nl;
        }
    }*/


    ll num = n-l[siz-1]-1;
    bool flag = siz%2==0;
    siz /= 2;
    if(!flag)siz++;
    string ansBase = to_string(num + pow10[siz-1]);

    if(flag){
        cout << ansBase;
        reverse(all(ansBase));
        cout << ansBase << nl;
    }
    else{
        cout << ansBase;
        ansBase.pop_back();
        reverse(all(ansBase));
        cout << ansBase << nl;
    }
}