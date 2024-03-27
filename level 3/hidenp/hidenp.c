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
        if (argc == 3)
        {
                int     i = 0;
                int     j = 0;
                int     counter = 0;

                while (argv[1][i])
                {
                        while (argv[2][j])
                        {
                                if (argv[1][i] == argv[2][j])
                                {
                                        counter++;
                                        i++;
                                        break;
                                }
                                j++;
                        }
                        if (!argv[2][j])
                                break;
                }
                if (counter == ft_strlen(argv[1]))
                        write(1, "1", 1);
                else
                        write(1, "0", 1);
        }
        write(1, "\n", 1);
}