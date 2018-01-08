#include "liste.h"

List new_list()
{
   return NULL;
}

Bool is_empty_list(List li)
{
    if(li == NULL)
        return true;
    return false;
}

void print_list(List li)
{
    if(is_empty_list(li))
    {
        fprintf(stderr,"Rien a afficher, la liste est vide.\n");
    }
    while(li != NULL)
    {
        printf("[%d]",li->value);
        li = li->next;
    }
    printf("\n\n");
}

List push_front_list(List li, int x)
{
    ListElement *Element;
    Element = (ListElement*)malloc(sizeof(ListElement));
    if(Element == NULL)
    {
        fprintf(stderr,"Allocation echouee.\n");
        exit(EXIT_FAILURE);
    }
    if(is_empty_list(li))
    {
        Element->value = x;
        Element->next = NULL;
    }
    else
    {
        Element->value = x;
        Element->next = li;
    }


    return Element;
}

List push_back_list(List li, int x)
{
    ListElement *Element;
    Element = (ListElement*)malloc(sizeof(ListElement));

    if(Element == NULL)
    {
        fprintf(stderr,"Allocation echouee.\n");
        exit(EXIT_FAILURE);
    }
    Element->value = x;
    Element->next = NULL;
    if(is_empty_list(li))
        return Element;
    ListElement *tmp;
    tmp = li;

    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = Element;

    return Element;
}

List push_list(List li, int x)
{
    if(is_empty_list(li) || x<li->value)
        return push_front_list(li,x);
    if(x == li->value)
    {
        printf("L'element %d se trouve deja dans la liste.\n",li->value);
        return li;
    }
    li->next = push_list(li->next, x);
    return li;
}

List pop_front_list(List li)
{
    ListElement *Element;
    Element = (ListElement*)malloc(sizeof(ListElement));

    if(Element == NULL)
    {
        fprintf(stderr,"Allocation echouee.\n");
        exit(EXIT_FAILURE);
    }
    if(is_empty_list(li))
    {
        fprintf(stderr,"Rien a supprimer, la liste est vide");
        return li;
    }
    Element = li->next;
    free(li);
    li = NULL;

    return Element;
}
List pop_back_list(List li)
{
    if(is_empty_list(li))
        return new_list();
    if(li->next == NULL)
    {
        free(li);
        li = NULL;
        return new_list();
    }
    ListElement *tmp = li;
    ListElement *before = li;

    while(tmp->next != NULL)
    {
        before = tmp;
        tmp = tmp->next;
    }
    before->next = NULL;
    free(tmp);
    tmp = NULL;

    return li;
}

List pop_list(List li, int x)
{
    if(is_empty_list(li))
    {
        fprintf(stderr,"Rein a supprimer, la liste est vide.\n");
       return new_list();
    }
    else if(x<li->value)
    {
        fprintf(stderr,"Element non present dans la liste.\n");
        return li;
    }
    else if(x == li->value)
        return pop_front_list(li);
    li->next = pop_list(li->next,x);
    return li;
}

int list_front(List li)
{
    if(is_empty_list(li))
    {
       fprintf(stderr,"La liste est vide.\n");
       exit(EXIT_SUCCESS);
    }
    return li->value;
}

int list_length(List li)
{
    int length = 0;
    if(is_empty_list(li))
    {
       return length;
    }
    while(li != NULL)
    {
        ++length;
        li = li->next;
    }
    return length;
}
