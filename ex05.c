/*Create a function that displays all different combinations of three different digits in
ascending order, listed by ascending order - yes, repetition is voluntary
• Here’s the intended output :
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 isn’t there because 789 already is.
• 999 isn’t there because the digit 9 is present more than once
*/


#include <unistd.h>

void ft_print_comb(void)
{
int a;
int b;
int c;
a = '0';
while(a <= '7')
{
  b = a + 1;
  while(b <= '8')
  {
    c = b + 1;
    while(c <= '9')
    {
      write(1, &a, 1);
      write(1, &b, 1);
      write(1, &c, 1);
      if(a != '7')
      {
        write(1, ", ", 2);
      }
      c++;
    }
    b++;
  }
  a++;
}
}

int main()
{
  ft_print_comb();
  return 0;
}