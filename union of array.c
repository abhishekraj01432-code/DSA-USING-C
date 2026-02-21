#include <stdio.h>
int main() {
    int a[50],n1, b[50],n2, c[100],n3=0,i,j;
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
    i = 0; j = 0;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            if(n3 == 0 || c[n3-1] != a[i])
                c[n3++] = a[i];
            i++;
        } else if(b[j] < a[i]) {
            if(n3 == 0 || c[n3-1] != b[j])
                c[n3++] = b[j];
            j++;
        } else {
            if(n3 == 0 || c[n3-1] != a[i])
                c[n3++] = a[i];
            i++;
            j++;
        }
    }
    while(i < n1) {
        if(n3 == 0 || c[n3-1] != a[i])
            c[n3++] = a[i];
        i++;
    }
    while(j < n2) {
        if(n3 == 0 || c[n3-1] != b[j])
            c[n3++] = b[j];
        j++;
    }
    printf("Union of arrays:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}

