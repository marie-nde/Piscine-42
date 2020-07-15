#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, str + i++, 1);
}

void	ft_print(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		ft_putstr(s1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_print(av[1], av[2]);
	write(1, "\n", 1);
}
