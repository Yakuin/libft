#include "libft.h"
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
  size_t i;
  void *tmp;

  tmp = s;
  i = 0;
  while(i < n)
  {
    tmp[i] = '\0';
    i++;
  }
}
