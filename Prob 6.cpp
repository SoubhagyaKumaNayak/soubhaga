#include <iostream>

using namespace std;

   int Diff(int m)
   { 

  int a,b,j; 


    a= (m * (m + 1) * (2 * m + 1)) / 6; 

      b = (m * (m + 1)) / 2; 

       b= b* b; 

        j= (b-a); 

      

    return j; 

  
} 

  int main() 
{ 

    int n = 100; 

    cout << Diff(n); 

    return 0; 

      
} 







  

    

    
      
     
        
           
        
       
    
  
         
          
            
             
              
             
          
           

