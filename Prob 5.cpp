#include<iostream>

using namespace std;

long  gcd(long,long);

long LCM(long a,long b)
{

         int LCM;
         LCM=(a*b)/gcd(a,b);

         return LCM;
}

long gcd(long a,long b)
{

         while(a!=b)
         {
            if(a>b)
            {    
                a=a-b;    
                }
            else
            {
                b=b-a;
                
            } 
             
         }
        return a;
        }


int main()
{
int j=1;

for(int i=11;i<=20;i++)
{
        j=LCM(j,i);
}

cout<<j;

return 0;
}




     
     
     
       
      
      
       
         
           
             
              
           
       
      
      
     
      
















  


    

   




