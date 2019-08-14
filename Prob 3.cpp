#include <iostream>

using namespace std;

int main() 
{
    long long x=600851475143;
    int i;
    
    for(i=2;i*i<=x;++i)
    {
        while(x%i==0 && x!=i)
        {
            x/=i;
        }
    }
    cout<<"largest prime factor of x is"<<" "<<x;
    return 0; 
}
