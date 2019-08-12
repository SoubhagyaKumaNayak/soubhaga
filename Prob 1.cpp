#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    for(i=1;i<1000;++i)
    
        {
            if(i%3==0||i%5==0)
        {
            sum+=i;
        }
    }
    cout<<"sum of multiples of 3 and 5 is"<<sum;
    return 0;
    
    
}
