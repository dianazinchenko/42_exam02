#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
        int     *array;
        int     i = 0;
        int     direction = 1;
        int     size = end - start;

        if (size < 0)
        {
                size *= -1;
                direction = -1;
        }
        array = malloc(sizeof(int) * size);
        if (!array)
                return (NULL);
        while (i <= size)
        {
                array[i] = end;
                end -= direction;
                i++;
        }
        return (array);
}
/*
#include <stdio.h>

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                int     start = atoi(argv[1]);
                int     end = atoi(argv[2]);
                int     *array = ft_rrange(start, end);
                int     size = abs(end - start);

                for (int i = 0; i <= size; i++)
                {
                        printf("%i\n", array[i]);
                }
                free(array);
        }
}*/