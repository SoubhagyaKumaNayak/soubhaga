#include<iostream> 
using namespace std;  

int main() 
{ 
int fact=1,sum=0,i,d; 
for(i=1;i<=100;++i) 
{ 
fact=fact*i; 
} 
while(fact!=0) 
{ 
d=fact%10; 
sum=sum+d; 
fact/=10; 
}  
cout<<"sum of digits in the number 100! is"<<sum; 
return 0;  

} 

