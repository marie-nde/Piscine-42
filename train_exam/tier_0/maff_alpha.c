#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (str[i])
	{
		if (str[i] % 2 == 1)
			ft_putchar(str[i]);
		else if (str[i] % 2 == 0)
			ft_putchar(str[i] - 32);
		i++;
	}
}
