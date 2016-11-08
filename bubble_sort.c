/*
** bubble_sort.c for CPE_2016_pushswap_bootstrap in /home/arthur.melin/Code/CPE_2016/CPE_2016_pushswap_bootstrap
** 
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
** 
** Started on  Tue Nov  8 09:49:19 2016 Arthur Melin
** Last update Tue Nov  8 10:17:20 2016 Arthur Melin
*/

void	swap_elem(int *array, int index1, int index2)
{
  int	tmp;

  tmp = array[index1];
  array[index1] = array[index2];
  array[index2] = tmp;
}

void	please_sort_this_array(int *array, int size)
{
  int	i;
  int	swapped;

  swapped = 1;
  while (swapped)
    {
      i = 0;
      swapped = 0;
      while (i < size - 1)
	{
	  if (array[i] > array[i + 1])
	    {
	      swap_elem(array, i, i + 1);
	      swapped = 1;
	    }
	  i++;
	}
    }
}
