
//#include "libft.h"
#include <stdio.h>

char *ft_itoa(int s)
{
  int diviser;
  char *str;
  int result;
  int i;

  i = 0;
  diviser = 1;
  if(s == 0)
    return (str = "0\0");
  if(s < 0)
    {
      str[i] = '-';
      i++;
      s = -s;
    } 
  while((s / diviser) > 10)
    diviser *= 10;
  while(diviser != 1)
    {
      str[i] = ((s / diviser) % 10) + '0';
      diviser /= 10;
      i++;
    }
  str[i] = ((s / diviser) % 10) + '0';
  return (str);
}

int main(int argc, char **argv)
{
  printf("Main de test : ft_itoa\n");
  printf("Test parametres basiques (Entier positif)\n");
  printf("%s\n\n", ft_itoa(2543));

  printf("(Entier negatif)\n");
  printf("%s\n\n", ft_itoa(-254));

  printf("(Entier = 0)\n");
  printf("%s\n\n", ft_itoa(0));
 
  return (0);
}
