#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->data = number;
        n->next = NULL;

        //Prepend node to list (first comes last (like a stack))
        //n->next = list;
        //list = n;

        //in the order we entered the elements
        if (list == NULL)
        {
            //this node is entire list
            list = n;
        }

        //to sort
        else if (n->data < list->data) 
        {
            n->next = list;
            list = n;
        }

        else
        {
            //loop through the list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                //if we are at end of the list
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }

    }

    //printing the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->data);
    }

    //free memory before exiting the program
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return 0;
}