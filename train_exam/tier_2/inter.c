#include <unistd.h>

int		ft_check(char *str, char c, int len)
{
	int i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_print(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 0 && ft_check(s2, s1[i], -1) == 1)
		{
			write(1, s1 + i, 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_print(av[1], av[2]);
	}
	write(1, "\n", 1);
}
