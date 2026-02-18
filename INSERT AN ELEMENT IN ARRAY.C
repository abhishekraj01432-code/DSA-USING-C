#include<stdio.h>
int main()
{
    int a[10],n,i,num,pos;
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Enter the elemnts of array= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter number to insert: ");
    scanf("%d", &num);
    for(i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }
    a[pos-1] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nThis is Abhishek Verma. I successfully done of insert an element in array");
    return 0;
}
