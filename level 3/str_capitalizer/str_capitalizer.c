#include <unistd.h>

int     is_alpha(char c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
        return (0);
}

int     main(int argc, char **argv)
{
        if (argc <= 1)
        {
                write(1, "\n", 1);
                return (1);
        }
        if (argc > 1)
        {
                int     i = 0;
                int     j = 1;
                while (j < argc)
                {
                        while (argv[j][i])
                        {
                                if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                                        argv[j][i] += 32;
                                i++;
                        }
                        j++;
                        i = 0;
                }
                j = 1;
                i = 0;
                while (j < argc)
{
                        if (argv[j][0] >= 'a' && argv[j][0] <= 'z')
                        {
                                argv[j][0] -= 32;
                                write(1, &argv[j][0], 1);
                                i++;
                        }
                        while (argv[j][i])
                        {
                                if ((argv[j][i] == ' ' || argv[j][i] == '\t') && (is_alpha(argv[j][i + 1])))
                                        argv[j][i + 1] -= 32;
                                write(1, &argv[j][i], 1);
                                i++;
                        }
                        i = 0;
                        j++;
                        write(1, "\n", 1);
                }
        }
}