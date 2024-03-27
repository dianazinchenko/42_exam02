#include <unistd.h>

int     main(int argc, char **argv)
{
        if (argc == 3)
        {
                int     i = 0;
                int     j = 0;
                char    printed[256] = {0};
                char    *s1 = NULL;
                char    *s2 = NULL;

                s1 = argv[1];
                s2 = argv[2];
                while (s1[i])
                {
                        if (!printed[(int)s1[i]])
                        {
                                write(1, &s1[i], 1);
                                printed[(int)s1[i]] = 1;
                        }
                        i++;
                }
                while (s2[j])
                {
                        if (!printed[(int)s2[j]])
                        {
                                write(1, &s2[j], 1);
                                printed[(int)s2[j]] = 1;
                        }
                        j++;
                }
        }
        write(1, "\n", 1);
}