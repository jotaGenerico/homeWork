void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size) {
    int temp;
    int start = 0;
    int end = size - 1;

    while (start < end) {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        start++;
        end--;
    }
}

