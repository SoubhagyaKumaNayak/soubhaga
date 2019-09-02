#include<iostream>

using namespace std;

long  gcd(long,long);

long LCM(long a,long b)
{

        long LCM;
         LCM=a*(b/gcd(a,b));

         return LCM;
}

long gcd(long a,long b)
{

        while(a!=0)
        {
            long c=a;
            a=b%c;
            b=c;
        }
        return b;
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








       
         

      





      
        
          
            
            
                
           
           
            
              
            
             
        
      
        








     










     
     
     
       
      
      
       
         
           
             
              
           
       
      
      
     
      
















  


    

   




