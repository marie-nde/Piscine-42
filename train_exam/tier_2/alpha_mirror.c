#include <unistd.h>
#include <stdio.h>

void	ft_print(char *str)
{
	int i = 0;
	char alph[] = "zyxwvutsrqponmlkjihgfedcba";
	char tab[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = alph[str[i] - 'a'];
			write(1, str + i, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = tab[str[i] - 'A'];
			write(1, str + i, 1);
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
