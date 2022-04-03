#include <iostream>
using namespace std;

int main ()
{  int a,b,i,c,n;
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
    

 chisla_file = fopen("chisla", "r");
 for (n=1; n<=b-a+1; n++) {
    fscanf(chisla_file, "%d", &c);
    cout << n << ":";
    printf ( "%d \n", c);
 }
  fclose(chisla_file);
  return 0;
}
