#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
} *head, *p, *q;z

void create()
{
    typedef struct linked_list node;
    head = NULL;
    int i, n;ii

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

void insert_end(int value)
{
    typedef struct linked_list node;
    node *newNode, *temp;

    newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
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

    printf("\nEnter element to insert at end: ");
    scanf("%d", &val);
    insert_end(val);

    print();

    return 0;
}
