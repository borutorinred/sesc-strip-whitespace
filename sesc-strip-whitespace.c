#include <stdio.h>

int main(int argc, char const *argv[])
{
	char in[1024], out[1024] = {0};
	scanf("%c", in);
	for (char *c = in + 1; *(c - 1) != '\n'; c++)
		scanf("%c", c);

	char *j = out;
	for (char *i = in; *i != 0 && *i != '\n'; i++)
		if (*i != ' ' || (j != out && *(j - 1) != ' '))
			*(j++) = *i;

	if (*(j - 1) == ' ')
		j--;
	*j = 0;

	printf("%s\n", out);
	return 0;
}
