#include <stdio.h>

int NAND(int a,int b){
    return 1-a*b;
}



int AND(int a,int b){
    return NAND(NAND(a,b),NAND(a,b));
}



int NOT(int a){
    return NAND(a,a);
}



int OR(int a,int b){
    return NAND(NAND(a,a),NAND(b,b));
}


int XOR(int a,int b){
    //OR(AND(a,NOT(b)),AND(b,NOT(a)));
    //return NAND(NAND(AND(a,NOT(b)),AND(a,NOT(b))),NAND(AND(b,NOT(a)),AND(b,NOT(a))));
    return NAND(NAND(NAND(NAND(a,NAND(b,b)),NAND(a,NAND(b,b))),NAND(NAND(a,NAND(b,b)),NAND(a,NAND(b,b)))),NAND(NAND(NAND(b,NAND(a,a)),NAND(b,NAND(a,a))),NAND(NAND(b,NAND(a,a)),NAND(b,NAND(a,a)))));
}


int FA_2(int a,int b,int c){
    return OR(OR(AND(a,b),AND(b,c)),AND(c,a));
}



int FA_1(int a,int b,int c){
    return AND(OR(OR(a,b),c),OR(NOT(OR(OR(AND(a,b),AND(b,c)),AND(c,a))),AND(AND(a,b),c)));
}



int hyouji(int a[4]){
    int i;
    for(i=3;i>=0; i--) printf("%d",a[i]);
    return 0;
}



int calculate(int a[], int b[], int ans[], int c){
// for yourself
// if c=0 then tashizan, if c=1, then hikizan

    for(int i=0;i<4;i++){
        b[i]=XOR(b[i],c);
    }
    int kuriagari = c;
    for(int i=0;i<4;i++){
        ans[i]=FA_1(a[i],b[i],kuriagari);
        kuriagari = FA_2(a[i],b[i],kuriagari);
    }
}
/*
  0101
+)1001
------

*/
int main ()
{
    int i, c = 0;
    int a[4] = { 1, 0, 1, 0 }, b[4] ={ 1, 1, 1, 0}, ans[4];



    printf("  "); hyouji(a); printf("\n");



    if (c==0) printf("+)") ;else printf("-)");

    hyouji(b); printf("\n------");



    calculate(a,b,ans,c);



    printf("\n  "); hyouji(ans); printf("\n");



    return 0;
}