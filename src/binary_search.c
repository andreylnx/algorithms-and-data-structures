#include <stdio.h>
#define SEQ_SIZE 10

int i_binary_search(int[], int, int, int );
int r_binary_search(int[], int, int, int);
    
int main(int argc, char ** argv)
{
    int seq[SEQ_SIZE];
    int number;

    puts("Let's type a ordered sequence of numbers: ");
        
    for (int i = 0; i < SEQ_SIZE; i++)
    {
        int num_aux;
        scanf("%d", &num_aux);
        seq[i] = num_aux;
    }
    
    int chain_size = sizeof seq / sizeof seq[0];
    
    printf("Type the element you wish search for: ");
    int elem;
    scanf("%d", &elem);
    printf("\n");
    
    int index = r_binary_search(seq, 0, SEQ_SIZE, elem);
    
    printf("Element Position: %d\n", index);
    return 0;
}

int i_binary_search(int seq[], int low, int high, int elem) // i - iterative
{
    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        
        if (elem == seq[middle])
            return middle;
        
        if (elem < seq[middle])
            high = middle - 1;
        else //if (elem > seq[middle])
            low = middle + 1;
    }
    
    return -1;
}

int r_binary_search(int seq[], int low, int high, int elem) // r - recursive
{
    int middle = low + (high - low) / 2; 
    
    if (elem == seq[middle])
        return middle;
    
    if (elem < seq[middle])
        return r_binary_search(seq, low, middle - 1, elem);
    else //if (elem > seq[middle])
        return r_binary_search(seq, middle + 1, high, elem);
    
    return -1;
}
