#ifndef LIST_H
#define LIST_H

/**
 * struct lst - structure list
 * @str: a string
 * @len: an int
 * @next: pointer next element
 **/
typedef struct lst
{
	char *str;
	int len;
	struct lst *next;
} list_t;

size_t print_list(const list_t *h);
#endif
