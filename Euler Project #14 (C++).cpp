#include <iostream>
using namespace std;

int main()
{
    long long int num,count,max=0,maxn=0;
    for (long long int c=999999;c>500000;c--){
        num=c;
        count=0;
        while (true){
            if (num%2==0)
                num=num/2;
            else
                num=num*3+1;
            count++;
            if (num==1)
                break;
        }
        if (count>max){
            max=count;
            maxn=c;
            cout<<maxn<<"   "<<max<<endl;}
    }
    
    cout<<maxn<<endl;
    
    
    return 0;
}

