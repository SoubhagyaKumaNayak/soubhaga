#include<iostream>
#include<math.h>
using namespace std;


long check(long j)
{

    if(j<= 0 || j== 1 || (j % 2 == 0 && j!= 2))
    {
        return false;    
    }

        for(int i=3;i<=sqrt(j);i+=2)
        {
                if(j%i==0)
                {
                    return false;
                }
                   }
        return true;
}
int main()
{
    int a=0,m=1;
            while (a!=10001)
            {
                if(check(m))
                {
                    ++a;
                 }
                ++m;
                   }
                  
                   cout<<m-1;
                   return 0;


}







	
	
	  
	
		
	
	
	
	
		
		
		
		
	
	



	
   
    
  
	
		
		
			
		
		
		
			
			
		
		
		
	
 







  
    
        
        
          
        
    
   




   
    
    
      
        
       
        
        
        
         
         
        
    








  
                    
                      
                              
                              
                                   
                                       
                                   
                                     
                                   
                                       
                                    
                                       
                             
                             
                             
                          
                          
                          
                            
                       
                       
                     
               

