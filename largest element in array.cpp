//write a c program to get largest element of an array using the function
#include<stdio.h>
#include<conio.h>
void largest();
int main()
{
	largest();
	return 0;
	getch();
}
void largest()
{
	int a[100],n,big,i;
	printf("enter range");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<n;i++)
	{
		if(big<a[i])
		{
			big=a[i];
		}
	}
	printf("%d",big);
}
