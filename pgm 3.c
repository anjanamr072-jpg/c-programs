#include <stdio.h>
#include<conio.h>
void main()
{
    int p, n, r, si;

    printf("Enter Principal Amount /n ");
    scanf("%d", &p);
    
    printf("Enter number of years /n ");
    scanf("%d", &n);

    printf("Enter Rate of Interest /n ");
    scanf("%d", &r);

    si = (p * n * r) / 100;
    printf("%d is the simple interest",si);

}
