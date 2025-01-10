/* Create a function that displays the alphabet in lowercase, on a single line, by
descending order, starting from the letter ’z’.
*/

#include <unistd.h>


void ft_print_reverse_alphabet(void)
{
  char c = 'z';
  while(c >= 'a')
  {
    write(1, &c, 1);
    c--;
  }
}

int main()
{
  ft_print_reverse_alphabet();
  return 0;
}