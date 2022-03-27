#include <iostream>
using namespace std;

int main ()
{
    int number;
    FILE *test_file;
    test_file = fopen("test", "r");
    fscanf(test_file, "%d", &number);
    printf ("A: %d \n", number);
    fscanf(test_file, "%d", &number);
    printf ("A: %d \n", number);
    fscanf(test_file, "%d", &number);
    printf ("A: %d \n", number);
  fclose(test_file);
  return 0;
}
