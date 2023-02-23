#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int blessing;

	if (n > 98)
		for (blessing = n; blessing > 98; --blessing)
			printf("%d, ", blessing);
	else
		for (blessing = n; blessing < 98; ++blessing)
			printf("%d, ", blessing);
	printf("98\n");
}
