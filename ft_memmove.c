#include "libft.h"
#include <strings.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
  void *tmp_dest;
  void *tmp_src;
  
  i = 0;
  tmp_dest = dest;
  tmp_src = src;
  
  while(i < n)
  {
    tmp_src[i] = tmp_dest[i];
    i++;
  }
}
