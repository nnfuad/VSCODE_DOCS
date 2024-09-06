#include <math.h>
#include <stdio.h>
#include <string.h>
long long unsigned
const INFINITE = 8446744073709551615;
long long unsigned isprime(long long unsigned n)
{
  int flag = 0;
  if (n <= 1)
  {
    return 0;
  } 
  else
  {
    for (long long unsigned i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        flag = 1;
        break;
      }
    }
  }
  return (flag == 0) ? 1 : 0;
}
int main()
{
  long long unsigned a, p1, p2;
  scanf("%llu", & a);
  if (isprime(a))
  {
    printf("%llu is a prime num\n", a);
  } 
  else
  {
    printf("%llu is not a prime num\n", a);
  }
  if (isprime(a) == 0)
  {
    for (long long unsigned i = a, j = a; i >= 2 || j <= INFINITE; i--, j++)
    {
      if (i >= 2 && isprime(i) == 1)
      {
        p1 = i;
        break;
      }
      if (j <= INFINITE && isprime(j) == 1)
      {
        p2 = j;
        break;
      }
    }
    if (a - p1 <= p2 - a)
    {
      printf("%llu is the closest prime number\n", p1);
    }
    if (p2 - a <= a - p1)
    {
      printf("%llu is the closest prime number\n", p2);
    }
  }
  return 0;
}