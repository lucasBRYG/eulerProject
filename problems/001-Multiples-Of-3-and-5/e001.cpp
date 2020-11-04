//importing libraries
#import <iostream>
#import <cmath>

//declaring namespaces
using namespace std;

//executable
int
main ()
{
  //declaring necessary variables
  int x = 3;
  int y = 5;
  int z = x * y;
  int b = 999;
  
  int sum1 = (b / x) * ((b / x) + 1) / 2;
  sum1 *= x;
  int sum2 = (b / y) * ((b / y) + 1) / 2;
  sum2 *= y;
  int sum3 = (b / z) * ((b / z) + 1) / 2;
  sum3 *= z;
  
  cout << sum1 + sum2 - sum3 << "\n";
}