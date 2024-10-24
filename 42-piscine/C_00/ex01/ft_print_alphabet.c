#include <unistd.h>

void ft_print_alphabet(void)
{
	int a = 'a';
  int count = 0;

	while(count < 24){
		write(1, &a, 1);
    a++;
    count++;
	}
}
