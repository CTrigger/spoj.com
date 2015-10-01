//http://www.spoj.com/problems/BC/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,periodo;
	long long X,Y,Z;//dimensao
	long long Manual,Faca;
	for(i=1,scanf("%d",&periodo);i<=periodo;i++)
	{
		scanf(" %lld %lld %lld",&X, &Y, &Z);
		
		
		Manual=(X*Y*Z)-1;
		Faca=ceil(log(X)/log(2))+ceil(log(Y)/log(2))+ceil(log(Z)/log(2));
		
		printf("Case #%d: %lld %lld\n",i,Manual,Faca);
	}
	
	return 0;
}
