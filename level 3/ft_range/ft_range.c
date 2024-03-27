#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
        int     size = abs(end - start) + 1;
        int     *array;
        int     i = 0;

        array = malloc(sizeof(int) * size);
        if (!array)
                return (NULL);
        while (i < size)
        {
                if (start < end)
                {
                        array[i] = start;
                        start++;
                        i++;
                }
                else
                {
                        array[i] = start;
                        start--;
                        i++;
                }
        }
        return (array);
}

int     main(void)
{
        int     *array;
        int     start = 1;
        int     end = 5;
        int     size = abs(end - start) + 1;
        int     i = 0;

        array = ft_range(start, end);
        while (i < size)
        {
                printf("%i\n", array[i]);
                i++;
        }
        free(array);
}