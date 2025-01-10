//Create a function that displays all digits, on a single line, by ascending order.
#include <unistd.h>

void ft_print_numbers(void)
{
  char n = 48;
  while(n <= 57)
  {
    write(1, &n, 1);
    n++;
  }
}

int main()
{
  ft_print_numbers();
  return 0;
}