#include <unistd.h>

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                int     i = 0;
                int     had_space = 0;

                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
                while (argv[1][i])
                {
                        if (argv[1][i] == ' ' || argv[1][i] == '\t')
                                had_space = 1;
                        else if (argv[1][i] != ' ' && argv[1][i] != '\t')
                        {
                                if (had_space == 1)
                                        write(1, " ", 1);
                                write(1, &argv[1][i], 1);
                                had_space = 0;
                        }
                        i++;
                }
        }
        write(1, "\n", 1);
}
