#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int main() {
    int num, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 8;
        push(rem);
        num = num / 8;
    }
    printf("Octal number: ");
    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");

    return 0;
}
