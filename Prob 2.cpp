#include <iostream>

using namespace std;

int main() 
{
 long a1,a2,a3;
 int sum=0,i;
 a1=0;a2=1;
 while(a2<4000000)
{
    a3=a1+a2;
    a1=a2;
    a2=a3;
    if(a2%2==0)
    {
        sum+=a2;
    }
}
cout<<"sum is"<<sum;
return 0;
}
