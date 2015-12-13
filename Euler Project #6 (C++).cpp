#include <iostream>
using namespace std;

int sumofsquares (int);
int squareofsum (int);

int main()
{

    cout<<sumofsquares(100)<<endl;
    cout<<squareofsum(100)<<endl;
    cout<<squareofsum(100)-sumofsquares(100)<<endl;
    
    return 0;
}

int sumofsquares (int n){
    int sum=0;
    
    for (int c=1;c<=n;c++){
        sum=sum+c*c;
    }
    
    
    return sum;
}

int squareofsum (int n){
    int square,sum=0;
    
    for (int c=1;c<=n;c++){
        sum=sum+c;
    }
    square=sum*sum;
    
    return square;
}