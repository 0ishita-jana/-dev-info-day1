//elements of two array store in 3 rd array

#include<stdio.h>
#include<conio.h>
int main()
{
	int size,n,a[size],b[n],c[100],i,j,d;
	printf("enter the size of first array");
	scanf("%d",&size);
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter the size of 2nd array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
			}
			d=size+n;
			for(i=0;i<size;i++)
			{
				c[i]=a[i];
							}
							for(i=size,j=0;i<d,j<n;i++,j++)
							{
								c[i]=b[j];
								
							}
							printf("after merging elements");
							for(i=0;i<d;i++)
							{
								printf("%d",c[i]);
							}
}
