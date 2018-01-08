#include "dlist.h"

int main(int argc, char const *argv[])
{
	
	Dlist *li = new_dlist();

	if (is_empty_dlist(li))
	{
		puts("Liste vide");
	}
	else
		puts("Liste non vide");

	li = push_back_dlist(li,14);
 
	//li = clear_dlist(li);

	return EXIT_SUCCESS;
}