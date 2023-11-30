#include "push_swap.h"

int	ft_limits(const char *str)
{
	long int	num;

	num = ft_atol(str);
	if (num < INTMIN || num > INTMAX || !ft_isalldigit(str))
		exit(ft_printf("Error\n"));
	return (1);
}

int	is_ordened(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_limits(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				exit(ft_printf("Error\n"));
			j++;
		}
		i++;
	}
	return (is_ordened(argv));
}