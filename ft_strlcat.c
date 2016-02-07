
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t i_dst;
  size_t i_src;
  char *tmp_dst;
  char *tmp_src;
  
  tmp_dst = dst;
  tmp_src = (char*) src;
  i_dst = 0;
  i_src = 0;
  i_dst = ft_strlen(dst);
  while((tmp_src[i_src] != '\0') && (i_src < size - i_dst))
    {
      tmp_dst[i_dst + i_src] = tmp_src[i_src];
      i_src++;
    }
  tmp_dst[i_dst + i_src] = '\0';
  return (ft_strlen(tmp_dst));
}
