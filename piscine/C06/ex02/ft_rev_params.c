#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	while (argc-- > 1)
	{
		len = 0;
		while (argv[argc][len++]);
		write(1, argv[argc], len - 1);
		write(1, "\n", 1);
	}
}
