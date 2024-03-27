#include <unistd.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
        if (argc >= 2)
        {
                int     i = 0;
                int     start;
                int     end;
                int     had_space = 0;

                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
                start = i;
                while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
                        i++;
                end = i;
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
                while (argv[1][i])
                {
                        if (argv[1][i] == ' ' || argv[1][i] == '\t')
                                had_space = 1;
                        if (argv[1][i] != ' ' && argv[1][i] != '\t')
                        {
                                if (had_space == 1) 
                                        write(1, " ", 1);
                                if (argv[1][i + 1]) // if there is a next character
                                    had_space = 0;
                                else                // if there is no next character
                                    had_space = 1;
                                write(1, &argv[1][i], 1);
                        }
                        i++;
                }
                if (had_space == 1)
                        write(1, " ", 1);
                while (start < end)
                {
                        write(1, &argv[1][start], 1);
                        start++;
                }
        }
        write(1, "\n", 1);
}