#include <unistd.h>

int main(int argc, char **argv)
{
	int n = 0;
	if(argc > 0) {
		while (argv[0][n] != '\0') {
			write(1, &argv[0][n], 1);
			n++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
