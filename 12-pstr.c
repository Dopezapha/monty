#include "monty.h"
/**
 * display_stack_str - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void display_stack_str(stack_t **head, unsigned int line_number)
{
stack_t *h;
(void)line_number;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
