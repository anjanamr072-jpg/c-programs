#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,m1,m2,m3,sum,avg,grade;
	char name[10];
	printf("enter the name");
	scanf("%s",name);
	printf("enter the rno");
	scanf("%d",&rno);
	printf("enter the marks");
	scanf("%d%d%d",&m1,&m2,&m3);
    sum=m1+m2+m3;
    avg=sum/3;
    printf("Avg= %d",avg);
    if (avg>=99 && avg<=100)
    {
    	printf("The grade is A");
	}
	else if(avg>=70 && avg<=98)
	{
		printf("The grade is B");
	}
	else if(avg>=50 && avg<=70)
	{
		printf("The grade is C");
	}
	else
	{
	printf("fail");
    }  
}
	
