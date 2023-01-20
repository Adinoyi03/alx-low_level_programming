
philipyoo
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x1A-sorting_algorithms/print_list.c
@philipyoo
philipyoo Create 0x1A dir, readme, and print functions
 1 contributor
23 lines (21 sloc)  302 Bytes
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
