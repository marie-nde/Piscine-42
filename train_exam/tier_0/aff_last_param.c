#include <unistd.h>

int		main(int ac, char **av)
{
	int i = ac - 1;
	int j = 0;
	if (ac > 1)
	{
		while (av[i][j])
		{
			write(1, av[i] + j, 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
