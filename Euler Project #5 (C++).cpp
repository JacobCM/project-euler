#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    bool check=true,divisible=true;
    
    for (int c1=2500;check;c1++){
        for (int c2=2;c2<=20;c2++){
            if (c1%c2!=0){
                divisible=false;
                c2=21;}
        }
        if (divisible){
            cout<<c1<<endl;
            check=false;}
        divisible=true;
        
    }
    
    return 0;
}