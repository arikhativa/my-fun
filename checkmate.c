
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "checkmate.h"

int		id(char a, char b)
{
	if (b == 'R')
	{
		if (a == b || a == 'Q')
			return (1);
		if (a == 'B' || a == 'P')
			return (0);
	}
	if (b == 'B')
	{
		if (a == b || a == 'Q')
			return (1);
		if (a == 'R' || a == 'P')
			return (0);
	}
	return (-1);
}

t_pis	find_king(char **av)
{
	t_pis	king;
	int 	x = 0;
	int 	y = 1;

	while (av[y] != NULL)
	{
		while (av[y][x] != '\0')
		{
			if (av[y][x] == 'K')
			{
				king.x = x;
				king.y = y;
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (king);
}

int		k_ruck(int ac, char **av, t_pis king)
{
	int res1 = -1;
	int res2 = -1;
	int res3 = -1;
	int res4 = -1;
	int i;

	i = 1;
	while (i < (ac - 1) && res1 == -1) 
	{
		if ((king.y + i) < (ac))
			res1 = id(av[king.y + i][king.x], 'R');
		i++;
	}
	i = 1;
	while (i < (ac - 1) && res2 == -1) 
	{
		if ((king.y - i) >= 1)
			res2 = id(av[king.y - i][king.x], 'R');
		i++;
	}
	i = 1;
	while (i < (ac - 1) && res3 == -1) 
	{
		if ((king.x + i) < (ac - 1))
			res3 = id(av[king.y][king.x + i], 'R');
		i++;
	}
	i = 1;
	while (i < (ac - 1) && res4 == -1) 
	{
		if ((king.x - i) >= 0)
			res4 = id(av[king.y][king.x - i], 'R');
		i++;
	}
	if (res1 == 1 || res2 == 1 || res3 == 1 || res4 == 1)
		return (1);
	return (0);
}

int		k_bishop(int ac, char **av, t_pis king)
{
	int 	i;
	int res1 = -1;
	int res2 = -1;
	int res3 = -1;
	int res4 = -1;

	printf("ac  %d\n", ac);
	printf("x   %d\n", king.x);
	printf("y   %d\n", king.y);

	i = 1;
	while (i < (ac -1) && res1 == -1)
	{
		if (king.x + i < (ac - 1) && king.y + i < ac)
			res1 = id(av[king.y + i][king.x + i], 'B');
		i++;
	}
	i = 1;
	while (i < (ac - 1) && res2 == -1)
	{
		if (king.x - i >= 0 && king.y - i >= 1)
			res2 = id(av[king.y - i][king.x - i], 'B');
		i++;
	}
	i = 1;
	while (i < (ac- 1) && res3 == -1)
	{
		if (king.x + i < ac - 1 && king.y - i >= 1)
			res3 = id(av[king.y - i][king.x + i], 'B');
		i++;
	}
	i = 1;
	while (i < (ac - 2) && res4 == -1)
	{
		if (king.x - i >= 0 && king.y + i < ac)
			res4 = id(av[king.y + i][king.x - i], 'B');
		i++;
	}
	if (res1 == 1 || res2 == 1 || res3 == 1 || res4 == 1)
		return (1);
	return (0);
}

void	print(int res)
{
	if (res == 1)
		write(1, "Success\n", 8);
	if (res == 0)
		write(1, "Fail\n", 5);
	if (res == -1)
		write(1, "\n", 1);
}

int		make_line(int ac, char **av, t_pis king)
{
	if (k_ruck(ac, av, king))
		return (1);
	if (k_bishop(ac, av, king))
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	t_pis	king;
	int res = -1;

	if (ac > 1)
	{
		king = find_king(av);
		res = make_line(ac, av, king);
	}
	print(res);
	return (0);
}
