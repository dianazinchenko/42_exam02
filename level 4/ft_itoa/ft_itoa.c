#include <stdlib.h>

int     get_digits(int nbr)
{
        int     digits = 0;

        if (nbr == 0)
                return (2);
        if (nbr < 0)
                digits += 2;
        else
                digits++;
        while (nbr != 0)
        {
                nbr /= 10;
                digits++;
        }
        return (digits);
}

char    *ft_itoa(int nbr)
{
        int     digits = get_digits(nbr);
        char    *array = malloc(digits + 1);
        if (!array)
                return (NULL);
        if (nbr == 0)
                array[0] = '0';
        else if (nbr < 0)
                array[0] = '-';
        array[digits - 1] = '\0';
        while (nbr != 0)
        {
                if (nbr < 0)
                        array[digits - 2] = nbr % 10 * (-1) + '0';
                else
                        array[digits - 2] = nbr % 10 + '0';
                nbr /= 10;
                digits--;
        }
        return (array);
}
/*
#include <stdio.h>

int     main(void)
{
        int     nbr = -12345;
        
        printf("%s\n", ft_itoa(nbr));
}*/

