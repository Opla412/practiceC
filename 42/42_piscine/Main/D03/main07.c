#include <stdio.h>

char *ft_strrev(char *str);

int	main(int argc, char **argv)
{	
	if (argc > 1)
	{
		printf("%s", ft_strrev(argv[1]));
	}
	return (0);
}
