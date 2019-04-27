
#include <stdio.h>
#include <stdlib.h>


int 	count(int nbr, int base)
{
	int i = 1;

	while (nbr / base != 0)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

char *ft_itoa_base(int nbr, int base)
{
	int digit = count(nbr, base);
	char *s;

	s = (char*)malloc(sizeof(char)*(digit + 1));
	s[digit] = '\0';

	while (digit > 0)
	{
		s[digit - 1] = (nbr % base < 10) ? (nbr % base + '0') : (nbr % base + 'A' - 10);
		nbr /= base;
		digit--;
	}
	return (s);

}

int main (int ac, char **av)
{
	int nbr;
	int base;

	if (ac != 3)
		printf ("2 var pls\n");
	else
	{
		nbr = atoi(av[1]);
		base = atoi(av[2]);
		printf("%s\n", ft_itoa_base(nbr, base));

	}
	return (0);
}
