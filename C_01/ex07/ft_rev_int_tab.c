#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int temp;
  // int *endaux = tab - sizeof(tab) / sizeof(tab[0]) - 1;
  int *end = &(tab[size - 1]);

  printf("%d - %d", *tab, *end);
  while (*tab < *end)
  {
    temp = *tab;
    *tab = *end;
    *end = temp;
    printf("\n%d - %d", *tab, *end);

    tab++;
    end--;
  }
}

int main()
{

  int array[] = {1, 2, 3, 4, 5};

  int size = 5;
  int *tab = array;
  int counter = 0;
  ft_rev_int_tab(tab, size);
  printf("\n\nEn main %s", "\n");
  while (counter <= size - 1)
  {
    printf("%d \n", *tab);
    tab++;
    counter++;
  }
  return (0);
}
