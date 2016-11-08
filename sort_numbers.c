#include	"pimp_my_algo.h"

int		is_sorted(int *la, size_t nb)
{
  int		i;

  i = 0;
  while (i < nb - 1)
    {
      if (la[i] > la[i + 1])
	return (0);
      i++;
    }
  return (1);
}

int		find_min(int *la, int *lb, int nb)
{
  int		i;
  int		i_min;
  int		lb_sz;

  i_min = nb;
  lb_sz = 0;
  while (lb[lb_sz] != - 1)
    {
      if (i_min == nb || lb[lb_sz] < lb[-i_min - 1])
	i_min = -lb_sz - 1;
      lb_sz++;
    }
  i = 0;
  while (i < nb - lb_sz)
    {
      if (i_min == nb || la[i] < (i_min < 0 ? lb[-i_min - 1] : la[i_min]))
	i_min = i;
      i++;
    }
  return (i_min);
}

void		get_min(int *la, int *lb, size_t nb)
{
  int		i_min;

  i_min = find_min(la, lb, nb);
  if (i_min < 0)
    {
      while (i_min++ != 0)
	pop();
    }
  else
    {
      while (i_min-- != 0)
	push();
    }
}

int		sort_numbers(int *la, int *lb, size_t nb)
{
  if (nb < 2 || is_sorted(la, nb))
    return (0);
  while (nb)
    {
      get_min(la, lb, nb);
      if (la[1] != -1)
	rotate();
      nb--;
    }
  return (0);
}
