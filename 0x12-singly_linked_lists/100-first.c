#include <stdio.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - print a message before main function is excuted
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
