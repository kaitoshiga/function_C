#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*(str++) != '\0')
	{
		n++;
	}
	return (n);
}

/*int		main(void)
{
	char string[] = "google";
	char *point;
	int length;

	point = &string[0];
	length = ft_strlen(point);
	printf("文字列%s\n", string);
	printf("文字数%d\n", length);

	return 0;
}*/
