#include<stdio.h>
#include<conio.h>

void read(int A[10][10], int r, int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
}

void add(int A[10][10], int B[10][10], int C[10][10], int r, int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}

void display(int C[10][10], int r, int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r,c;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    printf("Enter number of columns: ");
    scanf("%d",&c);

    printf("Enter first matrix:\n");
    read(A,r,c);

    printf("Enter second matrix:\n");
    read(B,r,c);

    add(A,B,C,r,c);

    printf("Resultant matrix:\n");
    display(C,r,c);

    return 0;
}
