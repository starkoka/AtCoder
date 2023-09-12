#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T,Ans="Yes";
    int X=0,Y=0;
    cin>>S>>T;
    vector<char> Al;
    Al={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int> Slist(S.size());
    vector<int> Tlist(T.size());
    for(int i=0;i<26;i++){
        if(S[0]==Al.at(i)){
            X=i;
        }
    }
    for(int i=0;i<26;i++){
        if(T[0]==Al.at(i)){
            Y=i;
        }
    }


    for(int i=1;i<S.size();i++){
        for(int j=0;j<26;j++){
            if(S[i]==Al.at(j)){if(j-X>=0){Slist[i]=j-X;}else{Slist[i]=j-X+26;}break;}
        }
    }
    for(int i=1;i<T.size();i++){
        for(int j=0;j<26;j++){
            if(T[i]==Al.at(j)){if(j-Y>=0){Tlist[i]=j-Y;}else{Tlist[i]=j-Y+26;}break;}
        }
    }


    for(int i=0;i<Slist.size();i++){
        if(Slist.at(i)==Tlist.at(i)){Ans="Yes";}
        else{Ans="No";break;}
    }
    cout<<Ans<<endl;
}