#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Description: Using the main function this program
 * prints alphabet in upper and lower case followed
 * by a new line.
 * main - entry point

 * Return: Always 0 (success)
 */
int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
