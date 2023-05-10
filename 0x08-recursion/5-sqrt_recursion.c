#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
  if (n < 0) /* error case */
  {
    return (-1);
  }
  else if (n == 0 || n == 1) /* base cases */
  {
    return (n);
  }
  else /* recursive case */
  {
    int i;
    for (i = 1; i <= n / 2; i++)
    {
      if (i * i == n)
      {
        return (i);
      }
      else if (i * i > n)
      {
        return (-1);
      }
    }
    return (-1);
  }
}

