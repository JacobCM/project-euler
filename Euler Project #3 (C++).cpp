#include <iostream>
#include <cmath>
using namespace std;

bool prime (long int);

int main()
{
    
    long int num=600851475143,max=0;
    
    for (long int c=775147;c>1;c--){
        if (c%2!=0&&c%3!=0&&c%6!=0&&c%5!=0&&c%7!=0&&c%11!=0&&num%c==0){
        if (prime(c)){
            max=c;
            c=1;
        }}
    }
    
    cout<<max<<endl;
    
    
    return 0;
}

bool prime (long int n){
    bool check=true;
    
    for (long int c=2;c<sqrt(n)&&check==true;c++){
        if (n%c==0){
            check=false;
        }
    }
    
    if (check==false)
        return false;
    else
        return true;
}

