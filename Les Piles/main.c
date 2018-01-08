#include "stack.h"
int main()
{
    Stack sta = new_stack();
    print_stack(sta);
    sta = push_stack(sta,14);
    sta = push_stack(sta,45);
    sta = push_stack(sta,12);
    printf("Longueur de la pile: %d\n",stack_length(sta));
    printf("Le sommet de la pile est: %d\n",top_stack(sta));
    print_stack(sta);
    sta = pop_stack(sta);
    printf("Longueur de la pile: %d\n",stack_length(sta));
    printf("Le sommet de la pile est: %d\n",top_stack(sta));
    print_stack(sta);
    sta = pop_stack(sta);
    print_stack(sta);
    printf("Le sommet de la pile est: %d\n",top_stack(sta));
    return 0;
}
