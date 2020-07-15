#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		ft_atoi(char *str)
{
	int i = 0;
	int nb = 0;
	int neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * neg);
}

void	ft_doop(int val1, char *op, int val2)
{
	int nb;
	nb = 0;
	if (op[0] == '+')
		nb = val1 + val2;
	if (op[0] == '-')
		nb = val1 - val2;
	if (op[0] == '*')
		nb = val1 * val2;
	if (op[0] == '/')
		nb = val1 / val2;
	if (op[0] == '%')
		nb = val1 % val2;
	ft_putnbr(nb);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_doop(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
	write(1, "\n", 1);
}
