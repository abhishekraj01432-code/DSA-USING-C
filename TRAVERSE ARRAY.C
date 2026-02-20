#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elemnts of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elememts are here :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nMy name is Abhishek Verma. I succesfully done traversing");
    return 0;
}

