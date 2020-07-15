#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[i])
	{
		if (s1[j] == s2[i])
			j++;
		i++;
	}
	if (s1[j] == '\0')
		ft_putchar('1');
	else
		ft_putchar('0');
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_print(av[1], av[2]);
	ft_putchar('\n');
}
