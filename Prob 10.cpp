#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

long prime(long q)
{
    long j;
	for(  j=3;j<=sqrt(q); j+=2) 
	{
		if (q % j == 0) 
		{
		return 0;
		}
	}
	return 1;
}
int main()
{
	long i=3,sum=2;
	while(i<2000000)
	{
		if(i%2==0)
			++i;
		if(prime(i))
			sum+=i;
     ++i;
	}
		cout<<sum;
	return 0;

}
 














 




