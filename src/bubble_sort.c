#include <stdio.h>

#define SIZE 10

void bubble_sort(int *const ptr_array, size_t size);
void print_array_items(const int *const ptr_array, size_t array_size);

int main(void)
{
    int a[SIZE] = { 14, 52, 69, 44 , 32, 54, 68, 10, 2, 4 };

    printf("%s", "Original Order: ");
    print_array_items(a, SIZE);

    bubble_sort(a, SIZE);

    printf("%s", "Ascending Order (through Bubble Sort Algorithm): ");
    print_array_items(a, SIZE);
}

void bubble_sort(int *const ptr_array, size_t size)
{
    void swap(int *ptr_item1, int *ptr_item2);

    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (ptr_array[i] > ptr_array[i + 1])
            {
                swap(&ptr_array[i], &ptr_array[i + 1]);
            }
        }
    }
}

void swap(int *ptr_item1, int *ptr_item2)
{
    int item_aux = *ptr_item1;
    *ptr_item1 = *ptr_item2;
    *ptr_item2 = item_aux; 
}

void print_array_items(const int *const ptr_array, size_t array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", ptr_array[i]);
    }

    printf("\n");
}