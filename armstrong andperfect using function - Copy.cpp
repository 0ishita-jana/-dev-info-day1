#include<stdio.h>
#include<conio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int a,l;
	printf("enter any number");
	scanf("%d",&a);
	l=armstrong(a);
	if(l==a)
	{
	
	printf(" the number is armstrong%d",l);
	
}
else
{
	printf("the number is not armstrong");
}

	getch();
		return 0;
	
}
int armstrong(int v)
{
	int count=0,r,t,s=0,n,m;
	n=v;
	
	
	while(v!=0)
	{
		
		r=v%10;
		v=v/10;
		count++;
		
	}
	while(n!=0)
	{
		t=n%10;
		n=n/10;
		s=s+pow(t,count);
		
	}
	return(s);
	
}
