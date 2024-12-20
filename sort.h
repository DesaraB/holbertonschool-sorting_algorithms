#ifndef SORT_H
#define SORT_H

#include<stddef.h>
#include<stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node);
void quick_sort(int *array, size_t size);
int arrangement(int *array, int min_index, int pivot_index, size_t size);
void lomuto_sorting(int *array, int min_index, int pivot_index, size_t size);
void quick_sort(int *array, size_t size);


#endif
