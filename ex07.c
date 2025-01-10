/*• Create a function that displays the number entered as a parameter. The function
has to be able to display all possible values within an int type variable.

• For example:
◦ ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
write(1, "-2147483648", 12);
}
else if(nb < 0)
{
  ft_putchar('-');
  nb = -nb;
  ft_putnbr(nb);
}
else if(nb > 9)
{
  ft_putnbr(nb / 10);
  ft_putnbr(nb % 10);
}
else {
   ft_putchar(nb + 48);
}
}

int main()
{
  ft_putnbr(12345);
  ft_putchar('\n');
   ft_putnbr(-7);
  ft_putchar('\n');
   ft_putnbr(-2147483648);

}


