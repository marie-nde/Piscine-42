#include <unistd.h>

int		ft_check(char *str, int len, char c)
{
	int i = 0;
	while (i < len && str[i])
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
	int j = 0;

	while (s2[j])
	{
		while (s1[i])
		{
			if (ft_check(s1, i, s1[i]) == 0 && ft_check(s2, j, s1[i]) == 0)
				write(1, s1 + i, 1);
			i++;
		}
		if (ft_check(s2, j, s2[j]) == 0 && ft_check(s1, i, s2[j]) == 0)
			write(1, s2 + j, 1);
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_print(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
