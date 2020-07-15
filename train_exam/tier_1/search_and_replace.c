#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print(char *str, char *a, char *b)
{
	int i = 0;
	int j = 0;
	
	while (str[i])
	{
		if (str[i] == a[j])
			write(1, b + j, 1);
		else
			write(1, str + i, 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		ft_print(av[1], av[2], av[3]);
	}
	write(1, "\n", 1);
}
