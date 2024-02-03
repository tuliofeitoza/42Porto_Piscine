#include <unistd.h>

int	main(int ar, char **av)
{
	int	i = 0;

	if (ar == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return 0;
			}
			i++;
		}
		write(1, "\n", 1);
		return 0;
	}
	write(1, "a", 1);
	write(1, "\n", 1);
	return 0;
}
