
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUF 4096


void	chch(char *s1)
{
	int fd;
	char *name;
	char *s2;
	char *s3;
	char *s4;
	char id[] = "\"../includes/libft.h\"";
	char new[] = "<libft.h>";

	s2 = (char*)malloc(sizeof(char) * BUF);
	s4 = (char*)malloc(sizeof(char) * BUF);
	fd = open(s1, O_RDWR);
	read(fd, s2, BUF);
	close(fd);
	s3 = strstr(s2, id);
	if (!(s3 == NULL))
	{
		fd = open(s1, O_RDWR|O_TRUNC);
		s4 = strcpy(s4, s3 + strlen(id));
		s3 = strcpy(s3, new);
		s2 = strcat(s2, s4);
		write(fd, s2, strlen(s2));
		close(fd);
	}
	bzero(s2, BUF);
	bzero(s4, BUF);
	free(s2);
	free(s4);
}


int main(int ac, char **av)
{
	int n = 1;

	while (n < ac)
	{
		chch(av[n]);
		n++;
	}
	return (0);
}
