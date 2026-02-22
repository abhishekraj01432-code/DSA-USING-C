#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
} *head, *p, *q;

void create()
{
    typedef struct linked_list node;
    head = NULL;
    int i, n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node));
            printf("Enter data for node %d: ", i + 1);
            scanf("%d", &p->data);
            p->next = NULL;
            head = p;
        }
        else
        {
            q = (node *)malloc(sizeof(node));
            printf("Enter data for node %d: ", i + 1);
            scanf("%d", &q->data);
            q->next = NULL;
            p->next = q;
            p = q;
        }
    }
}

void insert_begin(int value)
{
    typedef struct linked_list node;
    node *newNode;

    newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void print()
{
    p = head;
    printf("\nLinked List: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int val;
    create();
    print();

    printf("\nEnter element to insert at beginning: ");
    scanf("%d", &val);
    insert_begin(val);

    print();

    return 0;
}
