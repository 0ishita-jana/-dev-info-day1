//binary to decimal
//ERROR OCCUR

#include<stdio.h>

#include<math.h>
int main()
{
	int n,r,p=0,s=0;
	printf("enter a binary number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=(s+(r*(pow(2,p))));
		p++;
	}
	return 0;
}
