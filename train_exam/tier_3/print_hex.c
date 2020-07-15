#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(long nb)
{
	char base[] = "0123456789abcdef";

	if (nb >= 16)
		ft_hex(nb / 16);
	ft_putchar(base[nb % 16]);
}

void	ft_print(char *nbr)
{
	long nb = 0;
	int i = 0;
	while (nbr[i] && nbr[i] > 47 && nbr[i] < 58)
	{
		nb = nb * 10 + (nbr[i] - '0');
		i++;
	}
	ft_hex(nb);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_print(av[1]);
	ft_putchar('\n');
}
