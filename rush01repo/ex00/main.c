
#include <unistd.h>

void    print_char(char c)
{
    write(1, &c, 1);
}


int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int i = 0;
	// etape parsing
	// if(!args_checker(ac, av))
	// 	return (0);
	while (i != 16)
	{
		print_char(av[1][i]);
		i++;
		if (i == 8 || i == 16 || i == 24 || i == 30)
			write(1,"\n",1);
	}
}
