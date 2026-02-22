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

void insert_mid(int value, int pos)
{
    typedef struct linked_list node;
    node *newNode, *temp;
    int i;

    newNode = (node *)malloc(sizeof(node));
    newNode->data = value;


    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
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
    int val, pos;
    create();
    print();

    printf("\nEnter element to insert in middle: ");
    scanf("%d", &val);
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    insert_mid(val, pos);

    print();

    return 0;
}
