#include <unistd.h>

int     no_repeat(int c, char *s, int index)
{
        int     i = 0;

        while (i < index)
        {
                if (s[i] == c)
                        return (0);
                i++;
        }
        return (1);
}

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                int     i = 0;
                int     j = 0;

                while (argv[1][i])
                        i++;
                while (argv[2][j])
                {
                        argv[1][i] = argv[2][j];
                        i++;
                        j++;
                }
                i--;
                j = 0;
                while (j <= i)
                {
                        if (no_repeat(argv[1][j], argv[1], j) == 1)
                                write(1, &argv[1][j], 1);
                        j++;
                }
        }
        write(1, "\n", 1);
}