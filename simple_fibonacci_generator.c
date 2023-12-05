/*
 * FIBONACCI ALGORITHM - SIMPLE GENERATOR
 * DATE: December 3, 2023.
 * Author: Andrey A. Oliveira
 *
 */

#include <stdlib.h>
#include <stdio.h>

unsigned short limit_pos;

void print_fibonnaci_series(unsigned long long * ptr_fb_series, int s_position)
{
    printf("- Fibonnaci Series (position : number): \n");
    for (int i = 0; i <= s_position; i++)
    {
        printf("%d : %llu\n", i, ptr_fb_series[i]);
    }
}

int main()
{
    printf("- Set the limit position: ");
    scanf("%hu", &limit_pos);

    unsigned long long * fbn_series = (unsigned long long *) malloc((limit_pos + 1) * sizeof(unsigned long long));
    
    for (int i = 0; i <= limit_pos; i++)
    {
        if (i <= 0)
        {
            fbn_series[i] = 0;    
        }
        else if (i == 1)
        {
            fbn_series[i] = 1;
        }
        else
        {
            fbn_series[i] = fbn_series[i-1] + fbn_series[i-2];
        }
    };
    
    print_fibonnaci_series(fbn_series, limit_pos);

    return 0;
}


