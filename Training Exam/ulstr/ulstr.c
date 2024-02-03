#include <unistd.h>

int	main(int c, char **v)
{
	int i = 0;
	if (c == 2)
	{
		while (v[1][i])
		{
			if (v[1][i] >= 'A' && v[1][i] <= 'Z')
				v[1][i] += 32;
			else if (v[1][i] >= 'a' && v[1][i] <= 'z')
				v[1][i] -= 32;
			write(1, &v[1][i], 1);
			i++;
		}
		//rite( 1, "\n", 1);
	}
	write(1, "\n", 1);
	return 0;
}
