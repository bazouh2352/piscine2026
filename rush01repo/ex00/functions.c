#include <unistd.h>

void    print_char(char c)
{
    write(1, &c, 1);
}

void	print_tab(char *s, int size)
{
	int	i;
	
	while(s[i])
	{
		print_char(s[i]);
		if (i % 2 != 0)
			print_char('\n');
		i++;
	}
}

void    print_str(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        print_char(str[i]);
        i++;
    }
}

int main(int ac,char **av){
	print_tab(av[1], 6);
}

/*
/rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$
*/
