#include <iostream>

using namespace std;

int main() {
   int a,b,c,sum=1000;
   for(a=1;a<=1000;++a)
    {
        for(b=a+1;b<=1000;++b)
        {
            c=sum-a-b;
            {
                if((a*a+b*b==c*c)&&(a+b+c==1000))
                {
                    cout<<a*b*c;
                }
            }
        }
    }
    return 0; 
}




    
  
   
  
        
         
           
  
                
                    
                
            
        
    

    

