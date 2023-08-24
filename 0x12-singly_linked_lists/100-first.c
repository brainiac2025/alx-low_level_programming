#include "lists.h"

/**
 * we can use the --attribute__((constructor)
 * attribute to specify a function that should
 * be executed automatically before main function
 */
void print_before_main(void)__attribute__((constructor));

/**
 * print_before_main - program to print before main
 * function is exceuted
 * Return: void
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must "
		       	"allow,\nI bore my house upon my back!\n");
}
