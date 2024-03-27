#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int     ft_list_size(t_list *begin_list)
{
        int     i = 0;
        
        if (!begin_list)
                return (0);
        while (begin_list)
        {
                begin_list = begin_list->next;
                i++;
        }
        return (i);
}

int     main(void)
{
        t_list  *head;
        t_list  *current;

        head = malloc(sizeof(t_list));
        if (!head)
            return (NULL);
        head->data = NULL;
        head->next = malloc(sizeof(t_list));
        if (!head->next)
        {
            free(head);
            return (NULL);
        }
        head->next->data = NULL;
        head->next->next = malloc(sizeof(t_list));
        if (!head->next->next)
        {
            free(head->next);
            free(head);
            return (NULL);
        }
        head->next->next->data = NULL;
        head->next->next->next = NULL;

        printf("%i\n", ft_list_size(head));

        while (head)
        {
                current = head;
                head = head->next;
                free(current);
        }
        return (0);
}