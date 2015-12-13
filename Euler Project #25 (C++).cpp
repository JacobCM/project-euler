#include <iostream>
using namespace std;

int fib (int);

int main()
{
    int small,v;
    
    for (int C=1;true;C++){
        small=fib(C);
        v=0;
        if (C%1000==0)
            cout<<C<<endl;
    for (int c=1;c<1001;c++){
        small=small/10;
        if (small==0)
            c=1002;
        else
            v++;
        if (v==1000)
            cout<<C<<" is the number!"<<endl;
    }
    }
    
    return 0;
}

int fib (int n){
    int a=1,b=0,c=1;
    for (int i=1;i<n;i++){
        c=a+b;
        b=a;
        a=c;
    }
        return c;
}