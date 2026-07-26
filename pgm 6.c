#include<stdio.h>
#include<conio.h>
void main()

	{
	int rect;
	int l,b;
	int area,peri;
	
	printf("enter the length and breadth /n");
	scanf("%d%d",&l,&b);
	area=l*b;
    printf("enter the perimeter of rectangle /n");
    scanf("%d",&peri);
    peri=2*(l+b);
    printf("%d",peri);
    } 




