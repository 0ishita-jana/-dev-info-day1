//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p=0;
	printf("enter a electric unit");
	scanf("%d",&n);
	if(n<=50)
	{
		p=n*0.50;
		p=p+(p*20/100);
		
	}
	else if(n<=150)
	{
		p=n*0.75;
		p=p+(p*20/100);
	}
	else if(n<=250)
	{
		p=n*1.20;
		p=p+(p*20/100);
	}
	else if(n>250)
	{
		p=n*1.50;
		p=p+(p*20/100);
	}
	printf("total electric bill=%d",p);
	return(0);
	getch();
}
