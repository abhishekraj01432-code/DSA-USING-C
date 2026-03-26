#include<stdio.h>
int main()
{
    int a,z;
    printf("Enter the value of a =");
    scanf("%d",&a);
    z = a++ * a++ * a++;
    printf("the value is =%d",z);
    return 0;
}
