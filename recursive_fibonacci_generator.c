/*
 * FIBONACCI ALGORITHM - RECURSIVE GENERATOR
 * DATE: December 4, 2023.
 * Author: Andrey A. de Oliveira
 * 
 */

#include <stdio.h>
#include <stdlib.h>


unsigned short limit_pos;

unsigned long long gen_fibo_number(int index)
{
    if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }
    else
    {
        return gen_fibo_number(index - 1) + gen_fibo_number(index - 2);
    }
}

int main()
{
    printf("- Set the limit position: ");
    scanf("%hu", &limit_pos);
    
    printf("- Fibonnaci Series (position : number): \n");
    for (int i = 0; i <= limit_pos; i++)
    {
        printf("%d : %llu\n", i, gen_fibo_number(i));
      
    }
    
  
    return 0;
}
