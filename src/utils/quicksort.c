
static int	partition(int *tab, int first, int last)
{
	int i;
	int j;
	int tmp;
	int pivot;

	pivot = tab[(first + last) / 2];
	i = first - 1;
	j = last + 1;
	while (1)
	{
		while (tab[++i] < pivot)
			;
		while (tab[--j] > pivot)
			;
		if (i >= j)
			return (j);
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
	}
}

void		quicksort(int *tab, int first, int last)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(tab, first, last);
		quicksort(tab, first, pivot);
		quicksort(tab, pivot + 1, last);
	}
}
