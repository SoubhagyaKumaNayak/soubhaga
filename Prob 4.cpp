#include <iostream>

using namespace std;

int main() {
    int r,s=0;
    long int num,max=0,i,j;
    for(i=100;i<=999;++i)
    { 
       for(j=100;j<=999;++j)
        {
        
            s=0;
            num=i*j;
            while(num>0)
            {
                r=num%10;
                s=s*10+r;
                num=num/10;
            }
            if(s==i*j)
            {
                if(i*j>max)
                max=i*j;
            }
        }
    }
    cout<<"largest plaindrome number made from 3 digit no is"<<max;
    return 0;
     
}
