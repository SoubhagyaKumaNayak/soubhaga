#include <iostream>


using namespace std;
long  prime(int n)
{ 
int m=n/2;
    for (int i = 2; i <=m ; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int c= 2;
    for (int i =3; i = i+2;)
    {
        if (prime(i))
        {
            c++;
        }
        if (c== 10001)
        {
            cout << i;
            return 0;
        }
    }
}







  
                    
                      
                              
                              
                                   
                                       
                                   
                                     
                                   
                                       
                                    
                                       
                             
                             
                             
                          
                          
                          
                            
                       
                       
                     
               

