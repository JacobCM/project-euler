#include <iostream>
using namespace std;

int div (int);

int main()
{
    int sum=0;
    
    for (int c1=2;c1<10000;c1+=2){
        for (int c2=1;c2<10000;c2+=2){
            if (div(c1)==c2&&div(c2)==c1&&c1!=c2){
                cout<<c1<<endl;
                sum=sum+c1+c2;
                c1=c2+2;}
        }
        if (c1%10==0)
            cout<<"at"<<c1<<endl;
    }
    
    cout<<"Sum:"<<sum<<endl;
    
    return 0;
}

int div (int n){
    int sum=0;
    
    for (int c=1;c<n/2+1;c++){
        if (n%c==0)
            sum=sum+c;}
    
    return sum;
}