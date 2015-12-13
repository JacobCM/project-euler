#include <iostream>
using namespace std;
int fib (int);

int main()
{
    
    int sum=0,c=1;
    
    while (fib(c)<4000001){
        if (fib(c)%2==0)
            sum=sum+fib(c);
        c++;
    }
    
    cout<<sum<<endl;
    
    return 0;
}

int fib (int n){
    int num=0,a=0,b=1;
    
    for (int c=1;c<=n;c++){
        num=a+b;
        a=b;
        b=num;
    }
    
    
    return num;
}