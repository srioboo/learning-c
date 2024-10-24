#include <stdio.h>

void  ft_swap(int *a, int *b)
{
    int *c;

    printf("a=%p b=%p c=%d\n", a, b, c);

    c = &a;
    &a = &b;
    &b = &c;
   
    int a_int;
    int b_int;

    a_int = *a;
    b_int = *b;

    printf("a=%p b=%p c=%d\n", a, b, c);

    printf("a=%d b=%d \n", a_int, b_int);
    
}

int main(void)
{
  int a;
  int b;

  a = 200;
  b = 300;
  ft_swap(&a, &b);
  return (0);
}
