#include <stdio.h>

int main() {
    int  a[10],n, b[10],m , o, i, j;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements of second array:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    o = n + m;
    int merged[o];
    for(i = 0; i < n; i++) {
        merged[i] = a[i];
    }
    for(j = 0; j < m; j++) {
        merged[i] = b[j];
        i++;
    }
    printf("\nMerged Array:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

