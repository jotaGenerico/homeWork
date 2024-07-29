int	main(int argc, char **argv)
{
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(argc, argv);
	if (tab == NULL)
		return (1);
	tab[0].copy = "aloha jota";
	ft_show_tab(tab);
	free(tab);
	return (0);
}
