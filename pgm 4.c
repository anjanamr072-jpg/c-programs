#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a <= b && a <= c)
	{
	printf("smallest number is %d",a);
    }
	else if(b<=a && b<=c)
	{
	printf("smallest number is %d",a);
    }
    else
    {
	printf("smallest number is %d",b);
    }   
	
}
