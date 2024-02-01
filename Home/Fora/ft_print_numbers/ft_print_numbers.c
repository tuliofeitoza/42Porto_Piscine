#include <unistd.h>

int	main(void)
{
	char a = '0';
	while (a <= '9')
	{
		write( 1, &a, 1);
		a++;
	}
	write(1 ,"\n", 1);
}
