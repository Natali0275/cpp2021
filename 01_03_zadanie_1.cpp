#include <iostream>
using namespace std;

int main ()
{
    int a,b,i,c;
    cout << "a<b";
    cin >> a >> b;
    FILE *chisla_file;
    chisla_file = fopen("chisla", "w");
    for (i=a; i<=b; i++ )
    {
        c=i*3;
        fprintf(chisla_file, "%d \n", c);
    }
  fclose(chisla_file);
  return 0;
}
