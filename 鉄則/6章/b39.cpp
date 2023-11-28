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
#include <fstream>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using minp_queue = priority_queue<intp, vector<intp>, greater<intp>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"
#define MOD_TEN (ll)1000000007
#define MOD_NINE (ll)998244353
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
void setup(){
	#ifdef LOCAL
		ifstream inputFile("input.txt");
		cin.rdbuf(inputFile.rdbuf());
	#else
		cin.tie(0); ios::sync_with_stdio(0);
	#endif
    cout<<fixed<<setprecision(10);
}
#ifdef LOCAL
#  include "debug_print.hpp"
#  define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#  define debug(...) (static_cast<void>(0))
#endif
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

int main(){
    setup();
	int n,d;
	cin >> n >> d;
	vector<intp> vec(n);
	vector<bool> unUsed(n,true);
	rep(i,0,n) {
		cin >> vec[i].F >> vec[i].S;
		vec[i].F--;
	}

	ll ans = 0;
	rep(D,0,d) {
		intp now = make_pair(-1,-1);
		rep(i,0,n) {
			if(unUsed[i] && vec[i].F <= D && now.F<=vec[i].S) {
				now = make_pair(vec[i].S,i);
			}
		}
		if(now.F!=-1) {
			unUsed[now.S] = false;
			ans += now.F;
		}
	}
	cout << ans << nl;
}
