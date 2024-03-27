int             max(int* tab, unsigned int len)
{
        unsigned int    i = 0;
        int     max;

        max = tab[i];
        while (i < len)
        {
                if (tab[i] > max)
                        max = tab[i];
                i++;
        }
        return (max);
}

#include <stdio.h>

int     main(void)
{
        int     tab[] = {1, 6, 4, 9, 7};
        int     len = 5;

        printf("%i", max(tab, len));
}