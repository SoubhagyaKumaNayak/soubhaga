#include <iostream>
#include<cmath>
using namespace std;
int sums(int n);
int square(int n);

int main() 
{
    cout<<square(100)-sums(100);
}
    
int sums(int n)
    {
        int sum=0,i;
        for(i=1;i<=100;++i)
        {
            sum+=pow(i,2);
        }
        return sum;
    }
    int square(int n)
         {
             int sum=0,squ=0,j;
             for(j=1;j<=100;++j)
             {
                 sum+=j;
             }
             squ=pow(sum,2);
             return squ; 
}
