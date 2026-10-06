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
using namespace std;
using namespace atcoder;
using ll = long long;
using intp = pair<int,int>;
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
#define F first
#define S second
#define nl "\n"
#define INF ((1LL<<62)-(1LL<<31))
#define inf ((1<<30)-(1<<15))
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

// Interval Set
// T: type of range, VAL: data type
template<class T, class VAL = long long> struct IntervalSet {
    struct Node {
        T l, r;
        VAL val;
        Node(const T &l, const T &r, const VAL &val) : l(l), r(r), val(val) {}
        constexpr bool operator < (const Node &rhs) const {
            if (l != rhs.l) return l < rhs.l;
            else return r < rhs.r;
        }
        friend ostream& operator << (ostream &s, const Node &e) {
            return s << "([" << e.l << ", " << e.r << "): " << e.val << ")";
        }
    };

    // internal values
    const VAL identity;
    set<Node> S;

    // constructor
    IntervalSet(const VAL &identity = VAL()) : identity(identity) {}
    IntervalSet(const vector<VAL> &v, const VAL &identity = VAL()) : identity(identity) {
        vector<Node> vec;
        for (int l = 0; l < (int)v.size();) {
            int r = l;
            while (r < (int)v.size() && v[r] == v[l]) r++;
            vec.emplace_back(l, r, v[l]);
            l = r;
        }
        S = set<Node>(vec.begin(), vec.end());
    }

    // get the basic iterators
    constexpr typename set<Node>::iterator begin() { return S.begin(); }
    constexpr typename set<Node>::iterator end() { return S.end(); }

    // get the iterator of interval which contains p
    // not exist -> S.end()
    constexpr typename set<Node>::iterator get(const T &p) {
        auto it = S.upper_bound(Node(p, numeric_limits<T>::max(), 0));
        if (it == S.begin()) return S.end();
        it = prev(it);
        if (it->l <= p && p < it->r) return it;
        else return S.end();
    }

    // get the leftist iterator of interval which contains value >= p
    constexpr typename set<Node>::iterator lower_bound(const T &p) {
        auto it = get(p);
        if (it != S.end()) return it;
        return S.upper_bound(Node(p, numeric_limits<T>::max(), 0));
    }

    // exist the interval which contains p: true, [l, r): true
    constexpr bool covered(const T &p) {
        auto it = get(p);
        if (it != S.end()) return true;
        else return false;
    }
    constexpr bool covered(const T &l, const T &r) {
        assert(l <= r);
        if (l == r) return true;
        auto it = get(l);
        if (it != S.end() && r <= it->r) return true;
        else return false;
    }

    // is p, q in same interval?
    constexpr bool same(const T &p, const T &q) {
        if (!covered(p) || !covered(q)) return false;
        return get(p) == get(q);
    }

    // get the value of interval which contains p
    // not exist -> identity
    constexpr VAL get_val(const T &p) {
        auto it = get(p);
        if (it != S.end()) return it->val;
        else return identity;
    }
    VAL operator [] (const T &p) const {
        return get_val(p);
    }

    // get mex (>= p)
    constexpr T get_mex(const T &p = 0) {
        auto it = S.upper_bound(Node(p, numeric_limits<T>::max(), 0));
        if (it == S.begin()) return p;
        it = prev(it);
        if (it->l <= p && p < it->r) return it->r;
        else return p;
    }

    // update [l, r) with value val / insert [l, r)
    // del: reflect effects of interval-delete
    // add: reflect effects of interval add
    template<class ADDFUNC, class DELFUNC> void update(T l, T r, const VAL &val, const ADDFUNC &add, const DELFUNC &del) {
        auto it = S.lower_bound(Node(l, 0, val));
        while (it != S.end() && it->l <= r) {
            if (it->l == r) {
                if (it->val ==val) {
                    del(r, it->r, val);
                    r = it->r;
                    it = S.erase(it);
                }
                break;
            }
            if (it->r <= r) {
                del(it->l, it->r, it->val);
                it = S.erase(it);
            } else {
                if (it->val == val) {
                    r = it->r;
                    del(it->l, it->r, it->val);
                    it = S.erase(it);
                } else {
                    del(it->l, r, it->val);
                    Node node = *it;
                    it = S.erase(it);
                    it = S.emplace_hint(it, r, node.r, node.val);
                }
            }
        }
        if (it != S.begin()) {
            it = prev(it);
            if (it->r == l) {
                if (it->val == val) {
                    del(it->l, it->r, it->val);
                    l = it->l;
                    it = S.erase(it);
                }
            } else if (l < it->r) {
                if (it->val == val) {
                    del(it->l, it->r, it->val);
                    l = min(l, it->l);
                    r = max(r, it->r);
                    it = S.erase(it);
                } else {
                    if (r < it->r) {
                        it = S.emplace_hint(next(it), r, it->r, it->val);
                        it = prev(it);
                    }
                    del(l, min(r, it->r), it->val);
                    Node node = *it;
                    it = S.erase(it);
                    it = S.emplace_hint(it, node.l, l, node.val);
                }
            }
        }
        if (it != S.end()) it = next(it);
        add(l, r, val);
        S.emplace_hint(it, l, r, val);
    }
    void update(const T &l, const T &r, const VAL &val) {
        update(l, r, val, [](T, T, VAL){}, [](T, T, VAL){});
    }
    template<class ADDFUNC, class DELFUNC> void insert(T l, T r, const ADDFUNC &add, const DELFUNC &del) {
        update(l, r, VAL(), add, del);
    }
    void insert(const T &l, const T &r) {
        update(l, r, VAL(), [](T, T, VAL){}, [](T, T, VAL){});
    }

    // erase [l, r)
    template<class ADDFUNC, class DELFUNC> void erase(T l, T r, const ADDFUNC &add, const DELFUNC &del) {
        auto it = S.lower_bound(Node(l, 0, VAL()));
        while (it != S.end() && it->l <= r) {
            if (it->l == r) break;
            if (it->r <= r) {
                del(it->l, it->r, it->val);
                it = S.erase(it);
            } else {
                del(it->l, r, it->val);
                Node node = *it;
                it = S.erase(it);
                it = S.emplace_hint(it, r, node.r, node.val);
            }
        }
        if (it != S.begin()) {
            it = prev(it);
            if (l < it->r) {
                if (r < it->r) {
                    it = S.emplace_hint(next(it), r, it->r, it->val);
                    it = prev(it);
                }
                del(l, min(r, it->r), it->val);
                Node node = *it;
                it = S.erase(it);
                it = S.emplace_hint(it, node.l, l, node.val);
            }
        }
    }
    void erase(const T &l, const T &r) {
        erase(l, r, [](T, T, VAL){}, [](T, T, VAL){});
    }

    // debug
    friend ostream& operator << (ostream &s, const IntervalSet &ins) {
        for (auto e : ins.S) {
            s << "([" << e.l << ", " << e.r << "): " << e.val << ") ";
        }
        return s;
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
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}
#ifdef LOCAL
#  include "debug_print.hpp"
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#  include "lib/cpp-dump/cpp-dump.hpp"
#else
#  define debug(...) (static_cast<void>(0))
#endif

__attribute__((constructor)) void constructor() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(16);
}

void solveAtCoder();

int main(){
    solveAtCoder();
}

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

//10^9は2^30を超えないよ
//llの最大値は10^19を超えないよ

//int max(int a,int b){return max(a,b);}
//int max(){return 0;} //op(a,e)=aが成り立つ

//sort比較関数。後ろにもっていきたい時true
//bool fcomp(const int& a, const int& b) { return a < b; }

// a/b VS c/d  ->  a*d VS c*b


void solveAtCoder(){

}