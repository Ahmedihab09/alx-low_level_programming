#ifndef MAIN_H
#define MAIN_H

typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
#endif /* MAIN_H */
