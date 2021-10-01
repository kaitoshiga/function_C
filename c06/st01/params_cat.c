#include <unistd.h>

int main(int argc, char **argv)
{
	int c,n;
	if (argc > 0)
	{
		c = 1;
		while (argc > c)
		{
			n = 0;
			while (argv[c][n] != '\0')
			{
				write(1, &argv[c][n], 1);
				n++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
