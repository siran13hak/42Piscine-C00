/*• Create a function that displays all different combination of two digits between 00
and 99, listed by ascending order.
• Here’s the expected output :
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
*/

#include <unistd.h>

void ft_putchar(char c)
{
  write( 1, &c, 1);
}


char ft_tens_or_ones(char c, unsigned int n)
{
  char result;

  result = 0;
  if(n == 0)
  {
    result = c / 10 + '0';
  }
  else {
    result = c % 10 + '0';
  }
return result;
}
void ft_print_comb2(void)
{
  char a;
  char b;

  a = 0;
  while( a <= 98)
  {
    b = a + 1;
    while(b <= 99)
    {
      ft_putchar(ft_tens_or_ones(a, 0));
      ft_putchar(ft_tens_or_ones(a, 1));
      ft_putchar(' ');
      ft_putchar(ft_tens_or_ones(b, 0));
      ft_putchar(ft_tens_or_ones(b, 1));
      if(!(a == 98 && b == 99))
      {
        write(1 , ", ", 2);
      }
      b++;
    }
    a++;
  }
 
}

int main()
{
  ft_print_comb2();
  return 0;
}