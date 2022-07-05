#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
<<<<<<< HEAD
=======

>>>>>>> 01b9343829698001d5f65ad49e0bb6b2d9ec0858
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
=======
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
>>>>>>> 01b9343829698001d5f65ad49e0bb6b2d9ec0858
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
