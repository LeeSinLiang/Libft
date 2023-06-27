char	**ft_split(char const *s, char c);

#include <stdio.h>
int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	split = ft_split(argv[1], argv[2][0]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}