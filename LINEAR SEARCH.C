#include<stdio.h>
int main()
{
    int a[100],i,n,num,flag=0,j;
    printf("Enter the no. of elements you wants to enter :");
    scanf("%d",&n);
    printf("Enter the array element :");
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements u want to search");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            j=i;
        }
    }
    if(flag==1)
        printf("%d element is found at location %d",num,j);
    else
        printf("Element is not found");
         printf("\nThis is Abhishek Verma succesfully done linear searching in array");
    return 0;
}



