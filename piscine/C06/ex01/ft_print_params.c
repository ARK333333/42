#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = 0;
	while (++i < argc)
	{
		len = 0;
		while (argv[i][len++]);
		write(1, argv[i], len - 1);
		write(1, "\n", 1);
	}
}
