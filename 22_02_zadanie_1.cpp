#include <iostream>

int main ()
{
  int a;

  for (a = 0; a <= 100; a++)
    if (a % 3 == 0)
      {
	printf ("a: %d \n", a);
      }
  return 0;
}
