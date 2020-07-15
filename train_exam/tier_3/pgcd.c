#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int pgcd;
	int div = 1;

	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		while (div <= a || div <= b)
		{
			if (a % div == 0 && b % div == 0)
				pgcd = div;
			div++;
		}
		printf("%d", pgcd);
	}
	printf("\n");
}
