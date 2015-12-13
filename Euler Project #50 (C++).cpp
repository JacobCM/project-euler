#include <iostream>
using namespace std;

bool prime (int);

int main()
{
    bool a=true;
    int sum=0;
    
        for (int c1=2;c1<10000;c1++){
            for (int c2=2;c2<=c1/2;c2++){
            if (c1%c2==0)
                a=false;}
            if (a==true)
            sum=sum+c1;
            if (prime(sum))
                cout<<sum<<endl;
            a=true;
        }
    
    
    
    return 0;
}

bool prime (int a){
    bool tf=true;
    for (int c=2;c<=a/2;c++){
        if (a%c==0)
            tf=false;
    }
    
    return tf;
}











#include <iostream>
using namespace std;

bool prime (int);

int main()
{
    int sum=0,max=0,last=0,newsum=0;
    
    for (int c1=2;c1<5000;c1++){
        if (prime(c1))
            sum=sum+c1;
        if (prime(sum)){
            last=c1;
            max=sum;}
        
        if (max>1000000){
            newsum=sum-last;
            for (int c2=2;c2<1000;c2++){
                if (prime(c2)){
                    newsum=newsum-c2;
                    if (prime(newsum)&&newsum>max&&newsum<1000000)
                        max=newsum;
        }
    }
        }
}
    cout<<max<<endl;
    
    return 0;
}

bool prime (int a){
    bool tf=true;
    for (int c=2;c<=a/2;c++){
        if (a%c==0)
            tf=false;
    }
    
    return tf;
}