#include <stdio.h>
#include <stdlib.h>
#define N 5

struct queue {
    int front;
    int rear;
    int item[N];
} q;

int is_empty() {
    return q.front == q.rear;
}


int is_full() {
    return (q.rear + 1) % N == q.front;
}
void insert(int x) {
    if (is_full()) {
        printf("Overflow: Item cannot be inserted\n");
    } else {
        q.item[q.rear] = x;
        q.rear = (q.rear + 1) % N;
    }
}

int delete() {
    if (is_empty()) {
        printf("Underflow: Empty item cannot be deleted\n");
        return -1;
    } else {
        int value = q.item[q.front];
        q.front = (q.front + 1) % N;
        return value;
    }
}

int main() {
    int i, x;
    q.front = 0;
    q.rear = 0;

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

