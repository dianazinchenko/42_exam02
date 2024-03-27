#include <unistd.h>

int     ft_strlen(char *s)
{
        int     i = 0;
        while (s[i])
                i++;
        return (i);
}

int     main(int argc, char **argv)
{
        if (argc == 4)
        {
                int     i = 0;
                while (argv[1][i] && (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1))
                {
                        if (argv[1][i] == argv[2][0])
                                argv[1][i] = argv[3][0];
                        write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
}