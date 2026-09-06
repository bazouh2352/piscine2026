#include <stdio.h>

int	args_checker(int ac, char **av)
{
	int	i;
//	int	space_amount;

	i = 0;
//	space_amount = 0;
	if (ac != 2)
		return (0);
	if (av[1][0] == '\0')
		return (0);
	while (av[1][i] != '\0')
	{
//		if (av[i] == ' ')
//			space_amount++;	
		if (av[1][i] != ' ' && (av[1][i] < '1' || av[1][i] > '4'))
			return (0);
		i++;	
	}
//	if (space_amount != 15)
//		return (0);
	return (1);
}
	

int main(int ac, char **av)
{
    int x = args_checker(ac, av);
    printf("%d", x);
}
//                             "X X X X Y Y Y Y Z Z Z Z F F  FF"
