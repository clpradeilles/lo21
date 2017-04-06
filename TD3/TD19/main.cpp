#include <iostream>
#include "fraction.h"

using namespace std;
using namespace MATH;

int main(){
  Fraction f1(2,4);
  Fraction f2(3,4);
  Fraction f3 = f1 + f2;
  f3++;
  cout << f3;
  try {
  Fraction f4(3, 0);
  } 
  catch (FractionException e){
    cout << e.getinfo();
  }
return 0;
 }
