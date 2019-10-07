char **ft_split(char *str, char *charset);

int main(int ac, char **av)
{
	char **tab;
	int i;
	ac = 0;


	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
