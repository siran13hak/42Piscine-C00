/*• Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
*/
#include <unistd.h>

void ft_is_negative(int n)
{
  if(n >= 0)
  {
    write(1, "P", 1);
  }else {
    write(1, "N",1);
  }
 
}


int main()
{
  ft_is_negative(0);
  return 0;
}