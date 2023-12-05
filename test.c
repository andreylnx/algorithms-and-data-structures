#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node_t *next;
} node_t;

int main()
{
    node_t *head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
  
    if (head == NULL)
    {
    return 1;
    }  
}

