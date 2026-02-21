#include <stdio.h>
int main() {
    int a[100],n1, b[100],n2, c[100],n3,i,j,k;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while(i < n1) {
        c[k++] = a[i++];
    }
    while(j < n2) {
        c[k++] = b[j++];
    }
    n3 = k;
    printf("Merged sorted array:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
