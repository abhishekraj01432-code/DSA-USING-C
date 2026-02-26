#include <stdio.h>
#include <stdlib.h>
#define N 5
struct queue {
    int front, rear;
    int item[N];
} q;
int is_empty() {
    return q.front > q.rear;
}
int is_full() {
    return q.rear == N - 1;
}
void insert(int x) {
    if (is_full()) {
        printf("Overflow: Item cannot be inserted\n");
    } else {
        q.item[++q.rear] = x;
    }
}
int delete() {
    if (is_empty()) {
        printf("Underflow: Empty item cannot be deleted\n");
        return -1;
    } else {
        return q.item[q.front++];
    }
}
int main() {
    int i, x;
    q.front = 0;
    q.rear = -1;
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &x);
        insert(x);
    }
    printf("Deleting all elements:\n");
    while (!is_empty()) {
        printf("%d\n", delete());
    }
    return 0;
}
