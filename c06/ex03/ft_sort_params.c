#include <unistd.h>

void	ft_swap(char	*a, char	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]) && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i - 1 <= argc)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) < 0)
		{
			ft_swap(argv[i], argv[i + 1]);
			ft_putstr(argv[i]);
		}
		i++;
	}
	return (0);
}
