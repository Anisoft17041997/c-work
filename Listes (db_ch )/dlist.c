#include "dlist.h"

Dlist *new_dlist(void)
{
	return NULL;
}

Bool is_empty_dlist(Dlist *li)
{
	if (li == NULL)
		return true;
	return false;
}

Dlist *push_back_list(Dlist *li, int x)
{
	DlistCell *new_elt = (*DlistCell)malloc(sizeof(DlistCell));
	// DlistCell *new_elt = malloc(sizeof(*new_elt));

	if (new_elt !== NULL)
	{
		new_elt->value = x;
		new_elt->back = NULL;
		new_elt->next = NULL;

		if (is_empty_dlist(li))
		{
			li = malloc(sizeof(*li));//new
			li->begin = new_elt;
			li->end = new_elt;
			li->length++;
		}

		li->end->next = new_elt;
		new_elt->back = li->end;
		li->end = new_elt;
		li->length++;	
	}

	return li;
}

Dlist *clear_dlist(Dlist *li)
{
	if(is_empty_dlist(li))
		return li;
	if(li_>length == 1 && li->begin == li->end)
		free(li);
	else
	{
		DlistCell *tmp = li->begin;

		while(tmp != NULL)
		{
			DlistCell *del = tmp;
			tmp = tmp->next;
			free(del);
			del = NULL;
		}
		free(li);
	}
	puts("La liste a ete correctement effacer");

	return new_dlist();
}