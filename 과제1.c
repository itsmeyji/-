#include <stdio.h>

int main()
{
	char* str[] = { "Korea", "Seoul", "Mapo", "152¹øÁö 2/3" };

	int i;
	int len_str = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < len_str; i++)
	{
		printf("%s\n", str[i]);
	}

	printf("\n");
	str[2] = "Jongno";

	for (i = 0; i < len_str; i++)
	{
		printf("%s\n", str[i]);
	}

	return 0;
}