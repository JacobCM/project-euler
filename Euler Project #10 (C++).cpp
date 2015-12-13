#include <iostream>
using namespace std;

long long int sumofprime ();

int main()
{
    
    cout<<sumofprime()<<endl;
    
    return 0;
}

long long int sumofprime (){
    
    long long int sum=0;
    int p=2;
    bool a[2000001],check=true;
    
    for (int i=2;i<2000001;i++)
        a[i]=true;
    a[1]=false;
    
    while (check==true){
        for (int i=2;i<2000000/p+1;i++){
            a[p*i]=false;
        }
        
        for (int c2=p+1;c2<2000000;c2++){
            if (c2==1999999){
                check=false;
                c2=2000000;}
            if (a[c2]==true){
                p=c2;
                c2=2000000;
            }
        }
    }
    
    
    for (int i=2;i<2000001;i++){
        if (a[i]==true)
            sum=sum+i;
    }
    
    return sum;
}