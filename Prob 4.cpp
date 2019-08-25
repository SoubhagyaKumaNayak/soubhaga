#include <iostream>

using namespace std;

int main() {
    int r,s=0;
    long int num,max=0,i;
    for(i=100;i<=999;++i)
    { 
       for(i=100;i<=999;++i)
        {
        
            s=0;
            num=i;
            while(num>0)
            {
                r=num%10;
                s=s*10+r;
                num=num/10;
            }
            if(s==i)
            {
                if(i>max)
                max=i;
            }
        }
    }
    cout<<"largest plaindrome number made from 3 digit no is"<<max;
    return 0;
     
}
