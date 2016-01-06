#include "libft.h"
#include <strings.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;
  void *tmp;
  void *src_tmp;

  i = 0;
  tmp = dest;
  src_tmp = src;
  while (i < n)
  {
    tmp[i] = src_tmp[i];
    i++;
  }
  return dest;
}
