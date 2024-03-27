void    ft_swap(int *a, int *b)
{
        int     temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
/*
#include <stdio.h>

int     main(void)
{
        int     a = 1;
        int     b = 2;

        ft_swap(&a, &b);
        printf("a = %i\nb = %i", a, b);
}*/