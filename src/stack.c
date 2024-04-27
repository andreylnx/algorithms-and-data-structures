/* (FIFO) STACK
 * Author: andreylnx (Andrey A. de Oliveira)
 * Date: April 22, 2024.
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_OPT 4

int option;

typedef struct item
{
    int number;
    struct item *next_item;
} t_item;

t_item *top_most_item = NULL;
t_item *bottom_most_item = NULL;

// Function Declarations
t_item * create_item();
void push(t_item *new_item);
void pop();
void show_stack(t_item *top_item);
void blank_line(int quantity);

int main() 
{
    do
    {
        blank_line(1);
        puts("---");
        puts("STACK MENU");
        puts("1. Push upon");
        puts("2. Pop out");
        puts("3. Show stack");
        puts("4. Exit");
        puts("---");
        printf("%s", ": ");

        scanf("%d", &option);
        
        switch (option)
        {
            case 1:
                push(create_item());
                break;

            case 2:
                pop();
                break;
                
            case 3:
                blank_line(1);
                puts("STACK:");
                show_stack(top_most_item);
                break;
                
            case EXIT_OPT:
                puts("");
                exit(0);

            default:
                puts("Invalid option.");
        }
    } while(option != EXIT_OPT);
}

t_item * create_item()
{
    printf("%s", "Enter the item: ");
    int number_aux;
    scanf("%d", &number_aux);
    
    t_item *new_item = malloc(sizeof(t_item));
    new_item->number = number_aux;
    new_item->next_item = NULL;

    return new_item;
}

void push(t_item *new_item)
{
    if (bottom_most_item == NULL && top_most_item == NULL)
    {
        bottom_most_item = new_item;
        top_most_item = new_item;
    }
    else
    {
        new_item->next_item = top_most_item;
        top_most_item = new_item;
    }
}

void pop()
{
    puts("pop() func");
}

void show_stack(t_item *top_item)
{
    if (bottom_most_item == NULL || top_most_item == NULL)
    {
        puts("There are no items in the stack.");
    }
    else
    {
        if (top_most_item == top_item)
        {
            printf("Topmost Item: %d\n", top_item->number);
        }
        else if (bottom_most_item == top_item)
        {
            printf("Bottom-most Item: %d\n", top_item->number);
        }
        else
        {
            printf("Item: %d\n", top_item->number);
        }
        
        if (top_item->next_item != NULL)
        {
            show_stack(top_item->next_item);    
        }
    }
}

void blank_line(int quantity)
{
    for (int i = 0; i < quantity; i++)
    {
        puts("");
    }
}
