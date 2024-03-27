#include <stdlib.h>

int     count_words(char *str)
{
        int     i = 0;
        int     is_word = 0;
        int     word_count = 0;

        while (str[i])
        {
                if (!is_word && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
                {
                        word_count++;
                        is_word = 1;
                }
                else if (is_word && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
                        is_word = 0;
                i++;
        }
        return (word_count);
}

int     word_len(char *str)
{
        int     i = 0;

        while (str[i] && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
                i++;
        return (i);
}

char    *free_array(char **array_of_words, int word_len)
{
        int     i = 0;

        while (i < word_len)
        {
                free(array_of_words[i]);
                i++;
        }
        free(array_of_words);
        return (0);
}

char    **fill_words_array(char **array_of_words, char *str, int word_count)
{
        int     i = 0;
        int     j = 0;
        int     word = 0;

        while (word < word_count)
        {
                j = 0;
                while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
                        i++;
                array_of_words[word] = malloc(word_len(&str[i]) + 1);
                if (!array_of_words[word])
                        return (NULL);
                while (str[i] && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
                {
                        array_of_words[word][j] = str[i];
                        j++;
                        i++;
                }
                array_of_words[word][j] = '\0';
                word++;
        }
        return (array_of_words);
}

char    **ft_split(char *str)
{
        char **array_of_words;
        int     word_count = count_words(str);

        array_of_words = malloc((word_count + 1) * sizeof(char *));
        if (!array_of_words)
                return (NULL);
        array_of_words[word_count] = 0;
        if (word_count > 0)
                array_of_words = fill_words_array(array_of_words, str, word_count);
        return (array_of_words);
}
/*
#include <stdio.h>

int     main(void)
{
        char *str = "hello world";
        char    **array = ft_split(str);

        for (int i = 0; array[i]; i++)
                printf("%s\n", array[i]);
}*/