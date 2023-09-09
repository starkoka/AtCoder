#include <bits/stdc++.h>
#include <functional>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
#define nl "\n"


int main(){
    //値の交換
    swap(a,b);

    //最大公約数 O(log max(a,b))
    gcd(a,b);

    //a[l], a[l+1], ..., a[r-1] を小さい順に並び替え O(NlogN)
    int l=0,r=1;
    sort(vec.begin() + l, vec.begin() + r);
    //a[0], a[1], ..., a[N-1] を大きい順に並び替え O(NlogN)
    sort(vec.begin(), vec.end(), greater< int >());
    //大きいならTrueを返す関数を自作
    sort(vec.begin(),vec.end(),fcomp);

    //stack型の変数stcを定義します。
    stack<int> stc;
    //スタックの一番上に要素を積みます。
    stc.push(1);
    //スタックの一番上の要素を取り除きます。
    stc.pop();
    //スタックの一番上の要素を返す
    stc.top();
    //スタックの要素数を整数で返す
    stc.size();
    //スタックの要素数が0である場合true
    stc.empty();

    //queue 型の変数を定義します。
    queue< int > que;
    //キューの最後尾に要素を入れます。
    que.push(1);
    //キューの一番前の要素を取り除きます。
    que.pop();
    //キューの一番前の要素を返す関数です。
    que.front();
    //キューの要素数を整数で返す
    que.size();
    //キューの要素数が0である場合true
    que.empty();

    // int 型の要素を持ち、最も小さい値を取り出す形の priority_queue を定義する場合
    priority_queue<int, vector<int>, greater<int>> Q1;

    // double 型の要素を持ち、最も小さい値を取り出す形の priority_queue を定義する場合
    priority_queue<double, vector<double>, greater<double>> Q2;

    // int 型の要素を持ち、最も大きい値を取り出す形の priority_queue を定義する場合
    priority_queue<int, vector<int>, less<int>> Q3;

    //キューの計算量はO(1),優先度付きキューの計算量はO(logN)


    // int 型のKeyに int 型のValueを記録する場合（2^31 要素の int 型配列と同じような感じ）
    map<int, int> M1;
    //値の安全なアクセス
    M1.at(key);
    //値の削除
    M1.erase(key);

    //探索したいkey以上のイテレータを返す
    lower_bound(vec.begin(), vec.end(),key);
    //探索したいkeyより大きいイテレータを返す
    upper_bound(vec.begin(), vec.end(),key);
    //keyより小さい要素の個数を求める
    lower_bound(vec.begin(), vec.end(),key) - vec.begin();
    //key以下の要素の個数を求める
    upper_bound(vec.begin(), vec.end(),key) - vec.begin();
    //keyの値の要素の個数を求める
    upper_bound(vec.begin(), vec.end(),key) - lower_bound(vec.begin(), vec.end(),key);

    //int,int,intの組を宣言
    tuple<int,int,int> tpl;
    //tupleを生成
    tpl = make_tuple(1,2,3);
    //tupleを分解
    int tpl1,tpl2,tpl3;
    tie(tpl1,tpl2,tpl3) = tpl;
}