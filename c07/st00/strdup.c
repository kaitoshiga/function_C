#include <stdlib.h>
#include <stdio.h>

int k_strlen(char *str)
{
	int c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*k_strcpy(char *dest, char *src)
{
	int c = 0;
	while(src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*k_strdup(char *src)
{
	char *dest;

	dest = malloc((k_strlen(src) + 1) * sizeof(char));
	return (dest ? k_strcpy(dest, src) : dest);
}

int main()
{
	char *test = "Testando a strdup!";
	char *dup;

	printf("test = %s\n", test);
	dup = k_strdup(test);
	printf("dup = %s\n", dup);
	free(dup);
}
