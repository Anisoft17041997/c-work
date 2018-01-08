#include "stack.h"

/*
* Creer une nouvelle pile
* @return la nouvelle pile
*/
Stack new_stack(void)
{
    return NULL;
}

/*
* Verifie q'une pile est vide
* @param st la pile a verifier
* @return vrai si la pile est vide, faux sinon
*/
Bool is_empty_stack(Stack st)
{
    if(st == NULL)
        return true;
    return false;
}

/*
* Affiche le contenu de la pile
*/
void print_stack(Stack st)
{
    if(is_empty_stack(st))
    {
        puts("La pile est vide\n");
        return;//Empiler un entier dans la pile
    }
    puts("Affichage de la pile\n");
    while(is_empty_stack(st) == false)
    {
        printf("[%d]\n",st->value);
        st = st->next;
    }
}

/*
* Ajouter un entier sur la pile
* @param st la pile
* @param x l'entier a ajouter
* @return la nouvelle pile avec l'entier ajouter
*/
Stack push_stack(Stack st, int x)
{
    StackElement *element;
    element = (StackElement*)malloc(sizeof(StackElement));
    if(element == NULL)
    {
        puts("Probleme d'allocation de memoire.\n");
        exit(EXIT_FAILURE);
    }
    element->value = x;
    element->next = st;//!!
    return element;
}

/*
* Retire un entier de la pile
* @param st la pile
* @return la nouvelle avec l'entier supprime
*/
Stack pop_stack(Stack st)
{
    StackElement *element;
    if(is_empty_stack(st))
    {
        puts("La pile est vide");
        return NULL;
    }
    element = st->next;
    free(st);
    return element;
}


/*
* Retourne l'entier du sommet de la pile
* @param st la pile
* @return le dernier entier ajoute a la pile
*/
int top_stack(Stack st)
{
    if(is_empty_stack(st))
    {
        puts("La pile est vide\n");
    }

    return st->value;
}

/*
* Retourne la longueur de la pile
* @param st la pile
* @return le nombre d'element de la pile
*/
int stack_length(Stack st)
{
    int length = 0;
    while(st != NULL )
    {
        length++;
        st = st->next;
    }
    return length;
}
