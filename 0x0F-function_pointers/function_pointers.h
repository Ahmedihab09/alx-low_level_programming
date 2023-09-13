#ifndef MAIN_H
#define MAIN_H

void print_name(char *name, void (*f)(char *));
void print_name_function(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));`
#endif /* MAIN_H */

