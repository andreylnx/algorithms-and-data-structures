#include <stdio.h>
#include <stdlib.h>

#define EXIT_OPT 4

typedef struct Node
{
    char * desc;
    struct Node * next_node;
} node_t;

node_t * head;
node_t * tail;

int option;

void enqueue(node_t * new_node);
void dequeue();
void show_queue(node_t * head);
void blank_line(unsigned short int n_lines);

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

                char element_desc[100];
                scanf("%s", element_desc);

                node_t new_node;
                new_node.desc = element_desc;
                new_node.next_node = NULL;

                enqueue(&new_node);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                show_queue(head);
                blank_line(1);
                break;

            case EXIT_OPT:
                exit(0);

            default:
                printf("Invalid option.\n");
        }

    } while(option != 4);

}

void enqueue(node_t * new_node)
{
    if (head == NULL && tail == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        ( * tail).next_node = new_node;
        tail = new_node;
    }
}

void dequeue()
{
    
}

void show_queue(node_t * head_node)
{
    node_t *current_node = head_node;

    while (current_node != NULL)
    {
        printf("%s", (*current_node).desc);
        current_node = (*current_node).next_node;
    }
}

void blank_line(unsigned short int n_lines)
{
    for (int i = 0; i < n_lines; i++)
    {
        printf("\n");
    }
}
