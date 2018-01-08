#include "liste.h"

int main()
{
    List llist = new_list();
    /*llist = push_front_list(Elist,23);
    llist = push_front_list(Elist,6);
    llist = push_front_list(Elist,8);
    llist = push_front_list(Elist,0);
    llist = push_front_list(Elist,2);
    */
    llist = push_list(llist,6);
    llist = push_list(llist,2);
    llist = push_list(llist,9);
    llist = push_list(llist,6);
    printf("Longueur de la liste = %d\n",list_length(llist));
    printf("Premier element de la liste = %d\n",list_front(llist));
    print_list(llist);
    llist = pop_list(llist,2);
    print_list(llist);
    //llist = pop_back_list(llist);
    //print_list(llist);

    return 0;
}
