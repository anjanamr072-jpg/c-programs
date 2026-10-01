#include<stdio.h>
#include<conio.h>
void foo(int (*arr)[5])
{
    printf("%lu ", sizeof(*arr));
}

int main()
{
    int arr[5];

    // Passing the address of arr
    foo(&arr);
}
