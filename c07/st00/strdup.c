#include <stdlib.h>
#include <stdio.h>

int k_strlen(char *src)
{
	int c = 0;
	while (src[c])
		c++;
	return (c);
}

char	*k_strdup(char *src)
{
	char *dest;
	int i = 0;

	if (!(dest = malloc((k_strlen(src) + 1)* sizeof(char))))
		return (NULL);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char *test = "inimini rerai!";
	char *dup;

	printf("test = %s\n", test);
	dup = k_strdup(test);
	printf("dup = %s\n", dup);
	free(dup);
}
