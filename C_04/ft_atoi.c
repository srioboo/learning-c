#include <stdio.h>
#include <stdlib.h>


int ft_sign(char *str)
{
  // char aux[sizeof(str)];
  char aux[11];
  int i;
  int si;

  si = 1;
  // aux[0] = '1';
  i = 0;
  while (str[i])
  {
    if (str[i] == '-')
      si = -si;
    aux[i] == str[i];
    printf("aux1: %c\n", aux[i]);
    if (str[i] >= '0' && str[i] <= '9')
    {
      str = aux;
      printf("aux2:%s\n", aux);
      return (si);
    }     
    i++;
  }
  str = aux;
  return (si);

}

int ft_atoi(char *str)
{
  int result;
  
  printf("%s\n", str);
  ft_sign(str); 
  printf("%s\n", str);
  result = 0;

  return (result);
}

int main(void)
{

  char  *str_test = "--+2344ff34";

  printf("atoi: %d\n", atoi(str_test));
  printf("ft_atoi: %d\n", ft_atoi(str_test));
  printf(" ");
  return(0);
                                                                               }
