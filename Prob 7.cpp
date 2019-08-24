#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int c=0,i,j=2,prime=0;
                      while(prime<10001)
                      {
                              for(i=1;i<=sqrt(j);i++)
                              {
                                       if(j%i==0)
                                       {
                                         c++;
                                       }
                                       if(c>1)
                                       {
                                         break;
                                       }
                             }
                             if(c==1)
                             
                             prime++;
                             j++;
                             c=0;
                             
                       }
                       cout<<j-1;
                       return 0; 
               }

