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

#pragma GCC target("arch=skylake-avx512")/*
*/
//#define _GLIBCXX_DEBUG

//10^9は2^30を超えないよ

//int op(int a,int b){return a+b;}
//int e(){return 0;} //op(a,e)=aが成り立つ


int n;
int SEARCH;
#define DEPTH 2
#define MAX_SEARCH 26
#define LIMIT 2.95
#define AC_CHECKER

int func2(int first,bool change,vector<string> ans,vii vec,intp now,vector<queue<int>> q,uset done,vector<intp> idx,int before){
    int count = SEARCH+1;
    rep(I,0,SEARCH){
        rep(N,0,SEARCH){
            count--;
            if(count==0){
                return ans[0].size();
            }
            if(clock() >= CLOCKS_PER_SEC*LIMIT)return INT_MAX;
            int num;
            if(count==SEARCH){
                num = first;
            }
            else{
                if(change){ //前回の探索で動きがなかった場合
                    intp close2 = makep(-1,INT_MAX);
                    rep(i,0,n){
                        if(vec[i][0]!=-1){
                            if(chmin(close2.S,abs(now.F-i))){
                                close2.F = vec[i][1];
                            }
                        }
                    }
                    if(close2.F==-1){
                        return INT_MAX-1;
                    }
                    num = close2.F;
                }
                else{
                    //現在位置から最も近い数字を選択
                    intp close = makep(-1,INT_MAX);
                    rep(i,0,5){
                        while(!q[i].empty()){
                            if(done.count(q[i].front())){
                                q[i].pop();
                            }
                            else{
                                break;
                            }
                        }
                        if(q[i].empty())continue;
                        intp top = idx[q[i].front()];
                        if(top.F<0 || top.S<0)continue;

                        int dist = abs(top.F-now.F)+abs(top.S-now.S);
                        if(chmin(close.S,dist)){
                            close.F = i;
                        }
                    }
                    if(close.F == -1)continue;
                    num = q[close.F].front();
                    q[close.F].pop();
                }
            }
            int x = num/n;
            int y = num%n; //互換性維持のため残す
            if(done.count(num))continue;
            if(idx[num].S==-1)break;
            done.insert(num);
            rep(i,0,abs(now.S-idx[num].S)){
                if(now.S > idx[num].S)ans[0].push_back('L');
                else ans[0].push_back('R');
            }
            rep(i,0,abs(now.F-idx[num].F)){
                if(now.F > idx[num].F)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            now = idx[num];
            if(now.S==0 && vec[now.F][0]!=-1){
                idx[vec[now.F][0]].S++;
                vec[now.F][1] = vec[now.F][0];
                vec[now.F][0] = -1;
            }
            vec[now.F][now.S+1] = -1;
            ans[0].push_back('P');
            rep(i,0,abs(now.F-x)){
                if(now.F > x)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            rep(i,now.S,4){
                ans[0].push_back('R');
            }
            ans[0].push_back('Q');
            idx[num] = makep(-1,-1);
            now = makep(x,4);
        }

        if(done.size()==n*n){
            return ans[0].size();
        }

        //まだ搬入されていないブロックがあれば搬入させる
        rep(N,0,5){
            if(vec[N][0]==-1)continue;
            int light = 0;
            rrep(i,4,1){
                if(vec[N][i]==-1){
                    light = i-1;
                }
            }
            if(light == 0)continue;
            rep(i,0,abs(now.F-N)){
                if(now.F > N)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            now.F = N;
            rrep(i,light,1){
                rep(j,0,abs(now.S-(i-1))){
                    if(now.S > (i-1))ans[0].push_back('L');
                    else ans[0].push_back('R');
                }
                ans[0].push_back('P');
                ans[0].push_back('R');
                ans[0].push_back('Q');
                now.S = i;
                vec[N][i+1] = vec[N][i];
                vec[N][i] = -1;
                idx[vec[N][i+1]].S += 1;
            }
            vec[N][1] = vec[N][0];
            vec[N][0] = -1;
            idx[vec[N][1]].S += 1;
        }
        change = before==done.size();
        if(done.size()==n*n){
            return ans[0].size();
        }
    }
    return ans[0].size();
}

int func(int depth,int first,bool change,vector<string> ans,vii vec,intp now,vector<queue<int>> q,uset done,vector<intp> idx,int before){
    int count = SEARCH+1;
    rep(I,0,SEARCH){
        rep(N,0,SEARCH){
            count--;
            if(count==0){
                return ans[0].size();
            }
            if(clock() >= CLOCKS_PER_SEC*LIMIT)return INT_MAX;
            int num;
            if(count==SEARCH){
                num = first;
            }
            else{
                if(change){ //前回の探索で動きがなかった場合
                    intp close2 = makep(-1,INT_MAX);
                    rep(i,0,n){
                        if(vec[i][0]!=-1){
                            if(chmin(close2.S,abs(now.F-i))){
                                close2.F = vec[i][1];
                            }
                        }
                    }
                    if(close2.F==-1){
                        return INT_MAX-1;
                    }
                    num = close2.F;
                }
                else{
                    //現在位置から最も近い数字を選択
                    intp close = makep(-1,INT_MAX);
                    rep(i,0,5){
                        while(!q[i].empty()){
                            if(done.count(q[i].front())){
                                q[i].pop();
                            }
                            else{
                                break;
                            }
                        }
                        if(q[i].empty())continue;
                        intp top = idx[q[i].front()];
                        if(top.F<0 || top.S<0)continue;

                        int dist = INT_MAX;
                        int loop = depth;
                        rep(j,1,depth){
                            chmin(dist,func(depth-j,q[i].front(),change,ans,vec,now,q,done,idx,before));
                        }
                        chmin(dist,func2(q[i].front(),change,ans,vec,now,q,done,idx,before));
                        if(chmin(close.S,dist)){
                            close.F = i;
                        }
                    }
                    if(close.F == -1)continue;
                    num = q[close.F].front();
                    q[close.F].pop();
                }
            }
            int x = num/n;
            int y = num%n; //互換性維持のため残す
            if(done.count(num))continue;
            if(idx[num].S==-1)break;
            done.insert(num);
            rep(i,0,abs(now.S-idx[num].S)){
                if(now.S > idx[num].S)ans[0].push_back('L');
                else ans[0].push_back('R');
            }
            rep(i,0,abs(now.F-idx[num].F)){
                if(now.F > idx[num].F)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            now = idx[num];
            if(now.S==0 && vec[now.F][0]!=-1){
                idx[vec[now.F][0]].S++;
                vec[now.F][1] = vec[now.F][0];
                vec[now.F][0] = -1;
            }
            vec[now.F][now.S+1] = -1;
            ans[0].push_back('P');
            rep(i,0,abs(now.F-x)){
                if(now.F > x)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            rep(i,now.S,4){
                ans[0].push_back('R');
            }
            ans[0].push_back('Q');
            idx[num] = makep(-1,-1);
            now = makep(x,4);
        }

        if(done.size()==n*n){
            return ans[0].size();
        }

        //まだ搬入されていないブロックがあれば搬入させる
        rep(N,0,5){
            if(vec[N][0]==-1)continue;
            int light = 0;
            rrep(i,4,1){
                if(vec[N][i]==-1){
                    light = i-1;
                }
            }
            if(light == 0)continue;
            rep(i,0,abs(now.F-N)){
                if(now.F > N)ans[0].push_back('U');
                else ans[0].push_back('D');
            }
            now.F = N;
            rrep(i,light,1){
                rep(j,0,abs(now.S-(i-1))){
                    if(now.S > (i-1))ans[0].push_back('L');
                    else ans[0].push_back('R');
                }
                ans[0].push_back('P');
                ans[0].push_back('R');
                ans[0].push_back('Q');
                now.S = i;
                vec[N][i+1] = vec[N][i];
                vec[N][i] = -1;
                idx[vec[N][i+1]].S += 1;
            }
            vec[N][1] = vec[N][0];
            vec[N][0] = -1;
            idx[vec[N][1]].S += 1;
        }
        change = before==done.size();
        if(done.size()==n*n){
            return ans[0].size();
        }
    }
    return ans[0].size();
}


int main() {
    cin >> n;
    vii aVec(n,vi(n));
    vector<intp> aIdx(n*n);
    rep(i,0,n){
        rep(j,0,n){
            cin >> aVec[i][j];
            aIdx[aVec[i][j]] = makep(i,3-j);
        }
    }

    //todo 初回取り出せない5個があまり0の場合の最適化を手動で行う

    vector<pair<intp,pair<vector<string>,vector<intp>>>> finalAns;
    vector<string> ansInit(5);
    rep(N,0,5){
        rep(i,0,3){
            ansInit[N].push_back('P');
            rep(j,0,3-i){
                ansInit[N].push_back('R');
            }
            ansInit[N].push_back('Q');
            if(i==4)continue;
            rep(j,0,3-i){
                ansInit[N].push_back('L');
            }
        }
    }
    //ちょっと大変なので今回は大クレーンのみ
    rep(i,0,5){
        if(i==0)ansInit[i].push_back('.');
        else ansInit[i].push_back('B');
    }

    for(SEARCH=0;SEARCH<MAX_SEARCH;SEARCH+=2){
        vii vec(n,vi(n));
        vector<intp> add;
        vector<string> ans = ansInit;
        vector<intp> idx(n*n+1,makep(-1,-1));
        rep(i,0,n){
            rep(j,0,n){
                vec[i][4-j] = aVec[i][j];
                idx[vec[i][4-j]] = makep(i,3-j);
            }
        }

        intp now = makep(0,0);

        uset done;
        bool change = false;
        while(true){
            int before = done.size();
            vector<queue<int>> q(5,queue<int>());
            rep(i,0,5){
                rep(j,0,5){
                    q[i].push(i*5+j);
                }
            }
            rep(N,0,n*n){
                int num;
                if(change){ //前回の探索で動きがなかった場合
                    intp close2 = makep(-1,INT_MAX);
                    rep(i,0,n){
                        if(vec[i][0]!=-1){
                            if(chmin(close2.S,abs(now.F-i))){
                                close2.F = vec[i][1];
                            }
                        }
                    }
                    if(close2.F==-1){
                        goto end;
                    }
                    num = close2.F;
                    change = false;
                }
                else{
                    //現在位置から最も近い数字を選択
                    intp close = makep(-1,INT_MAX);
                    rep(i,0,5){
                        while(!q[i].empty()){
                            if(done.count(q[i].front())){
                                q[i].pop();
                            }
                            else{
                                break;
                            }
                        }
                        if(q[i].empty())continue;
                        intp top = idx[q[i].front()];
                        if(top.F<0 || top.S<0)continue;

                        int dist = func(DEPTH,q[i].front(),change,ans,vec,now,q,done,idx,before);
                        if(chmin(close.S,dist)){
                            close.F = i;
                        }
                    }
                    if(close.F == -1)continue;
                    num = q[close.F].front();
                    q[close.F].pop();
                }
                int x = num/n;
                int y = num%n; //互換性維持のため残す
                if(done.count(num))continue;
                if(idx[num].S==-1)break;
                done.insert(num);
                rep(i,0,abs(now.S-idx[num].S)){
                    if(now.S > idx[num].S)ans[0].push_back('L');
                    else ans[0].push_back('R');
                }
                rep(i,0,abs(now.F-idx[num].F)){
                    if(now.F > idx[num].F)ans[0].push_back('U');
                    else ans[0].push_back('D');
                }
                now = idx[num];
                if(now.S==0 && vec[now.F][0]!=-1){
                    idx[vec[now.F][0]].S++;
                    vec[now.F][1] = vec[now.F][0];
                    vec[now.F][0] = -1;
                }
                vec[now.F][now.S+1] = -1;
                ans[0].push_back('P');
                rep(i,0,abs(now.F-x)){
                    if(now.F > x)ans[0].push_back('U');
                    else ans[0].push_back('D');
                }
                rep(i,now.S,4){
                    ans[0].push_back('R');
                }
                ans[0].push_back('Q');
                add.emplace_back(makep(num,ans[0].size()-1));
                idx[num] = makep(-1,-1);
                now = makep(x,4);
            }

            if(done.size()==n*n)break;

            //まだ搬入されていないブロックがあれば搬入させる
            rep(N,0,5){
                if(vec[N][0]==-1)continue;
                int light = 0;
                rrep(i,4,1){
                    if(vec[N][i]==-1){
                        light = i-1;
                    }
                }
                if(light == 0)continue;
                rep(i,0,abs(now.F-N)){
                    if(now.F > N)ans[0].push_back('U');
                    else ans[0].push_back('D');
                }
                now.F = N;
                rrep(i,light,1){
                    rep(j,0,abs(now.S-(i-1))){
                        if(now.S > (i-1))ans[0].push_back('L');
                        else ans[0].push_back('R');
                    }
                    ans[0].push_back('P');
                    ans[0].push_back('R');
                    ans[0].push_back('Q');
                    now.S = i;
                    vec[N][i+1] = vec[N][i];
                    vec[N][i] = -1;
                    idx[vec[N][i+1]].S += 1;
                }
                vec[N][1] = vec[N][0];
                vec[N][0] = -1;
                idx[vec[N][1]].S += 1;
            }
            change = before==done.size();
            if(done.size()==n*n)break;
            if(clock() >= CLOCKS_PER_SEC*LIMIT)break;
        }
        end:
        finalAns.emplace_back(makep(makep(25-done.size(),ans[0].size()),makep(ans,add)));
        if(clock() >= CLOCKS_PER_SEC*LIMIT)break;
    }
    sort(all(finalAns));
    string str = finalAns[0].S.F[0].substr(19);
    vector<intp> numOrder = finalAns[0].S.S;
    vector<intp> sortedNumOrder = numOrder;
    sort(all(sortedNumOrder));

    vector<vector<intp>> order(n,vector<intp>(n-1,makep(-1,-1)));
    vector<intp> pIdx;
    {
        intp now = makep(0,0);
        rep(i,0,str.size()){
            char c = str[i];
            if(c=='U')now.F--;
            if(c=='D')now.F++;
            if(c=='R')now.S++;
            if(c=='L')now.S--;
            if(c=='P'){
                pIdx.emplace_back(now);
                order[now.F][now.S].S = i;
                if(order[now.F][now.S].F==-1){
                    order[now.F][now.S].F = i;
                }
            }
        }
    }

    intp move = makep(-1,-1);
    int canStart = 0;
    rep(j,1,4){ //今のアルゴリズムは絶対に1番右を選ばない
        rep(i, 1, 5) { //今のアルゴリズムは絶対に一番上を選ばない
            if(order[i][j].F!=order[i][j].S)continue;
            int num = aVec[i][3-j];
            {
                int next = -1;
                rep(k,0,n*n-1){
                    if(numOrder[k].F==num){
                        next = numOrder[k+1].F;
                        break;
                    }
                }
                if(next==-1 || next-num==1)continue;
            }
            int goal = num/n;
            //todo 要改善(ゴールへは単一ルートではない)
            bool flag = false;
            canStart = 0;
            rep(k,1,abs(goal-i)+1){
                if(goal > i){
                    if(order[i+k][j].S >= order[i][j].F){
                        flag = true;
                        break;
                    }
                    chmax(canStart,order[i+k][j].S);
                }
                else{
                    if(order[i-k][j].S >= order[i][j].F){
                        flag = true;
                        break;
                    }
                    chmax(canStart,order[i-k][j].S);
                }
            }
            rep(k,j+1,4){
                if(order[goal][k].S >= order[i][j].F){
                    flag = true;
                    break;
                }
                chmax(canStart,order[goal][k].S);
            }
            if(flag)continue;
            move = makep(i,j);
            chmax(canStart,sortedNumOrder[num].S-19); //-19されたターン数使用しているため調整
            goto done;
        }
    }
    done:
    canStart += 19;

    if(move.F == -1){
        str = finalAns[0].S.F[0].substr(19);
        rep(I,0,5){
            if(I==0){
                cout << "PRRRQLLLPRRQLLPRQL";
                if(str[0]=='D')cout << ".";
                cout << str << nl;
            }
            else{
                cout << "PRRRQLLLPRRQLLPRQLB" << nl;
            }
        }
        return 0;
    }

    string str1 = "PRRRQLLLPRRQLLPRQL";
    string str2 = "PRRRQLLLPRRQLLPRQL";
    rep(i,0,move.S)str2 += "R";

    {
        int deleteP = 0;
        rep(i,0,pIdx.size()){
            if(pIdx[i]==move){
                deleteP = i;
                break;
            }
        }
        int countP = 0;
        intp now = makep(0,0);
        int numOrderIdx = 0;
        rep(i,0,str.size()){
            char c = str[i];
            str1 += c;
            if(c=='U')now.F--;
            if(c=='D')now.F++;
            if(c=='R')now.S++;
            if(c=='L')now.S--;
            if(c=='P')countP++;
            if(c=='Q'){
                if(countP==deleteP){
                    if(deleteP+1 == pIdx.size()){//用無し
                        str1 += "B";
                        break;
                    }
                    i++;
                    while(str[i]!='P')i++;
                    while(str[i+1]!='P')i++;
                    intp goal = pIdx[deleteP+1];
                    if(move.F == now.F){
                        rep(j,0,abs(now.F-goal.F)){
                            if(now.F > goal.F)str1.push_back('U');
                            else str1.push_back('D');
                        }
                        rep(j,0,abs(now.S-goal.S)){
                            if(now.S > goal.S)str1.push_back('L');
                            else str1.push_back('R');
                        }
                    }
                    else{
                        rep(j,0,abs(now.S-goal.S)){
                            if(now.S > goal.S)str1.push_back('L');
                            else str1.push_back('R');
                        }
                        rep(j,0,abs(now.F-goal.F)){
                            if(now.F > goal.F)str1.push_back('U');
                            else str1.push_back('D');
                        }
                    }
                    now = goal;
                }
                if(now.F == 4){
                    numOrderIdx++;
                }
            }
        }
    }

    vector<vector<uset>> timing(n,vector<uset>(n));
    {
        intp now = makep(0,0);
        timing[0][0].insert(0);
        rep(i,1,str1.size()+1){
            char c = str1[i];
            if(c=='U')now.F--;
            if(c=='D')now.F++;
            if(c=='R')now.S++;
            if(c=='L')now.S--;
            timing[now.F][now.S].insert(i);
        }
    }

    {
        intp now = makep(move.F,move.S);
        int start = str2.size();
        vector<intp> add = {
                makep(0,-1),
                makep(0,1),
                makep(1,0),
                makep(-1,0)
        };
        vector<string> moveStr = {
                "LR",
                "RL",
                "DU",
                "UD"
        };
        int turn = start;
        for(;turn<canStart;turn++){
            if(timing[now.F][now.S].count(turn)){
                rep(j,0,4){
                    auto m = add[j];
                    if(now.F+m.F<0 || now.F+m.F>=n || now.S+m.S<0 || now.S+m.S>=n)continue;
                    if(timing[now.F+m.F][now.S+m.S].count(turn-1))continue;
                    if(timing[now.F+m.F][now.S+m.S].count(turn+1))continue;
                    str2 += moveStr[j];
                    turn++;
                    break;
                }
            }
            else{
                str2 += ".";
            }
        }
        int num = aVec[now.F][3-now.S];
        int goal = num/5;
        if(timing[now.F][now.S].count(turn)){
            rep(j,0,4){
                auto m = add[j];
                if(now.F+m.F<0 || now.F+m.F>=n || now.S+m.S<0 || now.S+m.S>=n)continue;
                if(timing[now.F+m.F][now.S+m.S].count(turn-1))continue;
                if(timing[now.F+m.F][now.S+m.S].count(turn+1))continue;
                str2 += moveStr[j];
                turn++;
                break;
            }
            turn+=2;
            str2 += "P";
        }
        else{
            str2 += "P";
        }
        rep(i,0,abs(move.F-goal)){
            turn++;
            char c = (move.F>goal ? 'U':'D');
            int addNum = (move.F>goal ? -1:1);
            if(timing[now.F+addNum][now.S].count(turn)){
                turn++;
                if(timing[now.F][now.S].count(turn)){
                    str2 += "Q";
                    rep(j,0,4){
                        auto m = add[j];
                        if(now.F+m.F<0 || now.F+m.F>=n || now.S+m.S<0 || now.S+m.S>=n)continue;
                        if(timing[now.F+m.F][now.S+m.S].count(turn-1))continue;
                        if(timing[now.F+m.F][now.S+m.S].count(turn+1))continue;
                        str2 += moveStr[j];
                        turn++;
                        break;
                    }
                    str2 += "P";
                    turn++;
                }
                else{
                    str2 += ".";
                    i--;
                    turn--;
                }
            }
            else{
                now.F += addNum;
                str2 += c;
            }
        }
        rep(i,0,4-move.S){
            turn++;
            char c = 'R';
            int addNum = 1;
            if(timing[now.F][now.S+addNum].count(turn)){
                turn++;
                if(timing[now.F][now.S].count(turn)){
                    str2 += "Q";
                    rep(j,0,4){
                        auto m = add[j];
                        if(now.F+m.F<0 || now.F+m.F>=n || now.S+m.S<0 || now.S+m.S>=n)continue;
                        if(timing[now.F+m.F][now.S+m.S].count(turn-1))continue;
                        if(timing[now.F+m.F][now.S+m.S].count(turn+1))continue;
                        str2 += moveStr[j];
                        turn++;
                        break;
                    }
                    str2 += "P";
                    turn++;
                }
                else{
                    str2 += ".";
                    i--;
                    turn--;
                }
            }
            else{
                now.S += addNum;
                str2 += c;
            }
        }
        str2 += "QB";
        if(timing[now.F][now.S].count(turn+1)){
            str1.insert(turn+1,"..");
        }
        else if(timing[now.F][now.S].count(turn+2)){
            str1.insert(turn+2,".");
        }
    }

    bool AC = true;
#ifdef AC_CHECKER
    {
        if(str1.size() < str2.size()){
            str1 += "B";
            str2.pop_back();
        }
        intp arm1 = makep(0,0);
        intp beforeArm1 = makep(-1,-1);
        intp arm2 = makep(move.F,0);
        intp beforeArm2 = makep(-1,-1);
        vii bord(n,vi(n,-1));
        vii out(n,vi(0));
        int have1=-1,have2=-1;
        bool arm1B = false,arm2B = false;

        rep(i,0,n){
            rep(j,0,5){
                bord[i][j] = aVec[i][4-j];
            }
        }

        rep(i,18,max(str1.size(),str2.size())){
            beforeArm1 = arm1;
            beforeArm2 = arm2;
            if(i<str1.size()){
                if(str1[i]=='U')arm1.F--;
                if(str1[i]=='D')arm1.F++;
                if(str1[i]=='R')arm1.S++;
                if(str1[i]=='L')arm1.S--;
                if(str1[i]=='P'){
                    if(have1!=-1){
                        AC = false;
                        break;
                    }
                    have1 = bord[arm1.F][arm1.S+1];
                    bord[arm1.F][arm1.S+1] = -1;
                }
                if(str1[i]=='Q'){
                    if(have1==-1){
                        AC = false;
                        break;
                    }
                    if(arm1.S==4){
                        out[arm1.F].emplace_back(have1);
                    }
                    else{
                        if(bord[arm1.F][arm1.S+1]!=-1){
                            AC = false;
                            break;
                        }
                        bord[arm1.F][arm1.S+1] = have1;
                    }
                    have1 = -1;
                }
                if(str1[i]=='B'){
                    if(have1!=-1){
                        AC = false;
                        break;
                    }
                    arm1B = true;
                }
                if(arm1.F>=n || arm1.F<0 || arm1.S>=n || arm1.S<0){
                    AC = false;
                    break;
                }
            }
            if(i < str2.size()){
                if(str2[i]=='U')arm2.F--;
                if(str2[i]=='D')arm2.F++;
                if(str2[i]=='R')arm2.S++;
                if(str2[i]=='L')arm2.S--;
                if(str2[i]=='P'){
                    if(have2!=-1){
                        AC = false;
                        break;
                    }
                    have2 = bord[arm2.F][arm2.S+1];
                    bord[arm2.F][arm2.S+1] = -1;
                }
                if(str2[i]=='Q'){
                    if(have2==-1){
                        AC = false;
                        break;
                    }
                    if(arm2.S==4){
                        out[arm2.F].emplace_back(have2);
                    }
                    else{
                        if(bord[arm2.F][arm2.S+1]!=-1){
                            AC = false;
                            break;
                        }
                        bord[arm2.F][arm2.S+1] = have1;
                    }
                    have2 = -1;
                }
                if(str2[i]=='B'){
                    if(have2!=-1){
                        AC = false;
                        break;
                    }
                    arm2B = true;
                }
                if(arm2.F>=n || arm2.F<0 || arm2.S>=n || arm2.S<0){
                    AC = false;
                    break;
                }
            }
            if(arm1==arm2 && !arm1B && !arm2B){
                AC = false;
                break;
            }
            if(beforeArm1==arm2 && beforeArm2==arm1 && !arm1B && !arm2B){
                AC = false;
                break;
            }
            rep(j,0,n){
                if(bord[j][1]==-1){
                    bord[j][1] = bord[j][0];
                    bord[j][0] = -1;
                }
            }
        }

        if(AC){
            vii good(n,vi(n));
            rep(i,0,n){
                rep(j,0,n){
                    good[i][j] = i*n+j;
                }
            }
            if(good!=out){
                AC = false;
            }
        }
    }
#endif


    str = "PRRRQLLLPRRQLLPRQL" + finalAns[0].S.F[0].substr(19);
    if(str[0]=='D')cout << ".";
    if(AC && str.size() > max(str1.size(),str2.size())){
        cout << str1 << nl;
        rep(i,1,n){
            if(move.F!=i)cout << "PRRRQLLLPRRQLLPRQLB" << nl;
            else cout << str2 << nl;
        }
    }
    else{
        rep(i,0,5){
            if(i==0)cout << str << nl;
            else cout << "PRRRQLLLPRRQLLPRQLB" << nl;
        }
    }
}
//提出前に、最適化フラグの確認
//ACチェッカー有効か確認すること！