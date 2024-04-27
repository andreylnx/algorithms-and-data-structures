#include <stdio.h>
#include <stdlib.h>

#define EXIT_OPT 4

typedef struct Node
{
    int number;
    struct Node *next_node;
} t_node;

t_node *head = NULL;
t_node *tail = NULL;

int option;

void enqueue(t_node *node);
void dequeue();
void show_queue(t_node *node_aux);


int main()
{
    do {
        printf("FIFO QUEUE: \n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Show the queue \n");
        printf("4. Exit \n");
        printf("--- \n");

        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Enter the element: ");

                int number_aux;
                scanf("%d", &number_aux);

                t_node *new_node = (t_node *) malloc(sizeof(t_node));
                new_node->number = number_aux;
                new_node->next_node = NULL;

                enqueue(new_node);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                show_queue(head);
                break;

            case EXIT_OPT:
                exit(0);

            default:
                printf("Invalid option.\n");
        }

    } while(option != 4);

}

void enqueue(t_node *node)
{
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else if (head != NULL && tail != node)
    {
        tail->next_node = node;
        tail = node;
    }
}

void dequeue()
{
    if (head != NULL)
    {
        t_node *node_to_remove = head;
        head = node_to_remove->next_node;
        free(node_to_remove);
    }
}

void show_queue(t_node *head_node)
{
    if (head == NULL)
    {
        puts("*** There are no items in the queue.");
        return;
    }
    else
    {
        printf("Node: %d\n", head_node->number);
    
        if (head_node->next_node != NULL)
        {
            show_queue(head_node->next_node);
        }
    }

}
