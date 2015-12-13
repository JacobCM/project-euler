#include <iostream>
using namespace std;

int main()
{
    
    int sum=0;
    
    for (int c=3;c!=1000;c++){
        if (c%3==0||c%5==0)
            sum=sum+c;
    }
    
    cout<<sum<<endl;
    
    return 0;
}