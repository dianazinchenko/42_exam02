#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
        int     data;
        t_list  *next;
};

// Function to compare two integers
int ascending(int a, int b)
{
        return (a <= b);
}

// Function to print the linked list
void printList(t_list   *lst)
{
    while (lst != NULL)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
        t_list  *tmp;
        int     swap;

        if (!lst || !cmp)
                return (0);
        tmp = lst;
        while (lst->next)
        {
                if (((*cmp)(lst->data, lst->next->data)) == 0)
                {
                        swap = lst->data;
                        lst->data = lst->next->data;
                        lst->next->data = swap;
                        lst = tmp;
                }
                else
                        lst = lst->next;
        }
        lst = tmp;
        return (lst);
}

int     main(void)
{
    // Test Case 1: Empty list
    t_list      *lst1 = NULL;
    t_list      *sortedList1; // Declare the sortedList1 variable
    sortedList1 = sort_list(lst1, ascending); // Assign the sorted list to sortedList1
    printf("Sorted List 1: ");
    printList(sortedList1);

    // Test Case 2: List with one element
    t_list      *lst2 = malloc(sizeof(t_list));
    lst2->data = 5;
    lst2->next = NULL;
    t_list      *sortedList2 = sort_list(lst2, ascending);
    printf("Sorted List 2: ");
    printList(sortedList2);

    // Test Case 3: List with multiple elements
    t_list      *lst3 = malloc(sizeof(t_list));
    lst3->data = 3;
    lst3->next = malloc(sizeof(t_list));
    lst3->next->data = 1;
    lst3->next->next = malloc(sizeof(t_list));
    lst3->next->next->data = 2;
    lst3->next->next->next = NULL;
    t_list      *sortedList3 = sort_list(lst3, ascending);
    printf("Sorted List 3: ");
    printList(sortedList3);

    return (0);
}