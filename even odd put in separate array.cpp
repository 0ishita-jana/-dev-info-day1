//put even and odd in different array
//ERROR OCCUR
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100]={0},n,r,b[100]={0},c[100]={0},i;
	printf("enter the range");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
			}
			for(i=0;i<n;i++)
			{
				r=a[i]%2;
				if(r==0)
				
				{
					b[i]=a[i];
				
					
				}
				else{
					printf("/n ");
					c[i]=a[i];
					
				}
			}
			printf("even numbers are /n");
			for(i=0;i<n;i++)
			{
			printf("%d",b[i]);	
			}
			printf("odd numbers are");
			for(i=0;i<n;i++)
			{
				printf("%d",c[i]);
			}
			return 0;
}
