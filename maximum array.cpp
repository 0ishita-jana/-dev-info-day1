//maximum number in array using function
#include<stdio.h>
#include<conio.h>
int max(int a[],int);
int main()
{
	int a[]={10,5,45,12,19};
	int n=5,m;
	
	m=max(a,n);
	printf("\n maximum number is %d",m);
	return 0;
	getch();
}
 max(int x[],int k)
{
int t,i;
t=x[0];
for(i=1;i<k;i++)
{
	if(x[i]>t)
	t=x[i];
	
	}	
return(t);
}
