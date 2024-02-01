
#include <stdlib.h>
#include <stdio.h>
int abs(int a)
{
	if(a < 0)
		return(-a);
	return (a);	
}


int *ft_range(int start, int end)
{
	int size;
	int i;

	size = abs(end - start + 1);
	int *tab = (int *)malloc((sizeof(int) * size)+1);
	if(!tab)
		return (0);
	if (size == 1)
		tab[0] = start;

	i = 0;
	if(start > end)
	{
		while(start >= end)
		{
			tab[i++] = start--;
		}
	}
	else if (start < end)
	{
		while(start <= end)
			tab[i++] = start++;	
	}
	return(tab);
		
}
int        main(void)
{
    int *tab;
    int i = 0;
    int start = -22;
    int end = 3 ;
    int size = abs(end - start) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}
