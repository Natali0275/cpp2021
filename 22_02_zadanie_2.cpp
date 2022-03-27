#include <iostream>
using namespace std;

int main ()
{

  int a=1, c=0;
  while (a<=1000) {
      if (a%7==0){
          c=c+a;
      }
      a=a+4;
  }
cout << c << "\n";
  
  
  return 0;
}
