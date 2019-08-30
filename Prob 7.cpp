#include<iostream>
#include<cmath>

using namespace std;


long prime(long a)
{
	if ( a%2==0)
	{
	    if(a>2)
	{
		return false;
	}
	}
	for(long b=3;b <= (long)sqrt(a); b=b+2) 
	{
		if (a % b == 0) 
		{
		return false;
		}
	}
	return true;
}
int main()
{
	
    long i=2,j=0;
    int c=0;
    while(true)
	{
		if(c==10001)
		{
			break;
		}
		if (prime(i))
		{
			j=i;
			c++;
		}
		i++;
	}	
	cout<<j;
     return 0;
}






  
    
        
        
          
        
    
   




   
    
    
      
        
       
        
        
        
         
         
        
    








  
                    
                      
                              
                              
                                   
                                       
                                   
                                     
                                   
                                       
                                    
                                       
                             
                             
                             
                          
                          
                          
                            
                       
                       
                     
               

