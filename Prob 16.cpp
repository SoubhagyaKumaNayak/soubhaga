#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int sum=0,d;  
    long int n;
     n=pow(2,1000);

    while(n!=0)
    {
        d=n%10; 
        sum+=d;
        n=n/10;
    }
    cout<<sum;
}
