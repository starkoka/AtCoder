#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,star=0;
    string text;
    cin>>N;
    vector<int> Pa(N);
    vector<int> Pb(N);
    for(int i=0;i<N-1;i++){
        cin>>Pa.at(i)>>Pb.at(i);
        if(Pa.at(i)>Pb.at(i)){swap(Pa.at(i),Pb.at(i));}

    }
    for(int i=0;i<N-1;i++){
        if(Pa.at(i)>Pb.at(i)){swap(Pa.at(i),Pb.at(i));}
    }
    if(Pa.at(0)==Pa.at(1)){text="Yes";star=Pa.at(0);}
    else if(Pa.at(0)==Pb.at(1)){text="Yes";star=Pa.at(0);}
    else if(Pb.at(0)==Pa.at(1)){text="Yes";star=Pb.at(0);}
    else if(Pb.at(0)==Pb.at(1)){text="Yes";star=Pb.at(0);}
    else{text="No";}
    if(text=="Yes"){
        for(int i=1;i<N-1;i++){
            if(Pa.at(i)==star){text="Yes";}
            else if(Pa.at(i)==star){text="Yes";}
            else if(Pb.at(i)==star){text="Yes";}
            else if(Pb.at(i)==star){text="Yes";}
            else{text="No";break;}
        }
    }
    cout<<text<<endl;
}