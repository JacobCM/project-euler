#include <iostream>
#include <cmath>
using namespace std;
long long int tri (long long int);
long long int div (long long int);

int main()
{
    
    long long int c=0;
    bool a=true;
    
    
    
    while (a==true){
        if (div(tri(c))>=500){
            cout<<c<<endl;
            a=false;}
        c++;
    }
    
    cout<<div(tri(12375))<<endl;
    
    return 0;
}

long long int tri (long long int n){
    long long int sum=0;
    for (long long int c=1;c<=n;c++){
        sum=sum+c;
    }
    
    return sum;
}

long long int div (long long int n){
    long long int divisors=0;
    
    for (long long int c=1;c<sqrt(n);c++){
        if (n%c==0)
            divisors++;
    }
    
    if (sqrt(n)*sqrt(n)==n)
        divisors=divisors*2+1;
    else
        divisors=divisors*2;
    
    return divisors;
}