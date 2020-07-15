#include <unistd.h>

void	ft_print(char *str)
{
	int i = 0;
	int j;
	int compt;
	while (str[i])
	{
		compt = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 96;
			while (compt < j)
			{
				write(1, str + i, 1);
				compt++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 64;
			while (compt < j)
			{
				write(1, str + i, 1);
				compt++;
			}
		}
		else
			write(1, str + i, 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_print(av[1]);
	write(1, "\n", 1);
}
