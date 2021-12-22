
#include "push_swap.h"

int	ft_isdigit(int val)
{
	if ('0' <= val && val <= '9')
		return (1);
	else
		return (0);
}

static int	min_max(unsigned int n, int flag)
{
	if (flag == 1)
	{
		if (n > 2147483647)
			return (-1);
	}
	else if (flag > 1)
	{
		if (n > 2147483648)
			return (0);
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	unsigned int	n;
	int				flag;

	n = 0;
	flag = 1;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			flag += 1;
		str++;
	}
	while (ft_isdigit(*str) != 0)
	{
		n += (*str - 48);
		if (ft_isdigit(*++str) != 0)
			n *= 10;
	}
	n = min_max(n, flag);
	if (flag > 1)
		return ((int)-n);
	return ((int)n);
}