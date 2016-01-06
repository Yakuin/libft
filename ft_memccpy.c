#include "libft.h"
#include <strings.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  size_t i;
  void *tmp_dest;
  const void *tmp_src;

  i = 0;
  tmp_dest = dest;
  tmp_src = src;
  while((i < n) && (src[i] != c))
  {
    tmp_dest[i] = tmp_src[i];
    i++;
    if(i == n)
      return NULL;
  }
  return tmp_dest[i + 1];
}
