#include <stdio.h>

int		ft_value(char c, int len)
{
	char base[] = "0123456789abcdef";
	char base2[] = "0123456789ABCDEF";
	int i = 0;

	while (i < len)
	{
		if (c == base[i] || c == base2[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	long nb = 0;
	int neg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (ft_value(str[i], str_base) != -1)
	{
		nb = nb * str_base;
		nb = nb + ft_value(str[i], str_base);
		i++;
	}
	return (nb * neg);
}
