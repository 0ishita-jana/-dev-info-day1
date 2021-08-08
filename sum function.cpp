
#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	int a;
a=sum();
printf("%d",a);
	
	getch();
	
	
	}
	int sum()
	{
		int i=1,n=5,l=0;
		while(i<=n)
		{
		int	j=i;
		int s=1;
			while(j!=0)
			{
		    	s=s*j;
		    	j--;	
			}
		 	
			l=l+s+i;
			i++;
		}
		
		return l;
	}
