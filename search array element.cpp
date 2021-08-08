#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,s;
	int a[]={2,3,5,9,6};
	s=sizeof(a);
	printf("enter the search element");
	scanf("%d",&n);
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
		
			printf("found%d",n);
		
	return 0;
}
	}
	
	printf("not found");
		

	

	return 0;
}
