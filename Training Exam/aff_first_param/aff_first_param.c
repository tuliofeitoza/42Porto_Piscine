#include <unistd.h>

int	main(int ar, char **av)
{
	int i = -1;
	if (ar > 2)
		while (av[1][++i])
		{
			write(1, &av[1][i], 1);
		}
	write(1, "\n", 1);
	return 0;
}
