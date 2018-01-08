#include <stdio.h>
#include <stdlib.h>

typedef enum
{ 
	false,
	true
}Bool;

typedef struct DlistCell
{
	int value;
	struct DlistCell *next;
	struct DlistCell *back;
	
}DlistCell;

typedef struct Dlist
{
	int length;
	struct DlistCell *begin;
	struct DlistCell *end;
}Dlist,*Dlist;

/*-------------------------------------------------------*/

Dlist *new_dlist(void);
Bool is_empty_dlist(Dlist *li);
Dlist *push_back_list(Dlist *li, int x);// A la fin de la liste
Dlist *clear_dlist(Dlist *li);
