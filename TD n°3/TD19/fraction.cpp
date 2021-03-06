#include "fraction.h"

void MATH::Fraction::setFraction(int n, int d){
    if (d == 0)
      throw FractionException("Erreur, denominateur nul");
    else
      {
	denominateur = d;
	numerateur = n;
	simplification();
      }
}
MATH::Fraction::Fraction(int n, int d){
  setFraction(n ,d);
}
void MATH::Fraction::simplification(){
    
  if (numerateur == 0) { 
      denominateur = 1;
      return; 
    }
  if (denominateur == 0) 
     return;

  int a = numerateur, b = denominateur;
  if (a < 0) 
     a = -a; 
  if (b < 0)
     b = -b;
  while(a!=b){ 
    if (a > b) 
      a = a - b; 
    else b = b - a; 
  }
  numerateur /= a;
  denominateur /= a;
  if (denominateur<0) { 
    denominateur = -denominateur; 
    numerateur = -numerateur; 
   }
}

MATH::Fraction MATH::operator+(const MATH::Fraction& f1, const MATH::Fraction& f2){
  Fraction res(f1.getnumerateur() * f2.getdenominateur() + f1.getdenominateur() * f2.getnumerateur(), f1.getdenominateur() * f2.getdenominateur());
  return res;
}

MATH::Fraction MATH::Fraction::operator++(){
  numerateur += denominateur;
  return *this;
}

MATH::Fraction MATH::Fraction::operator++(int){
  Fraction tmp = *this;
  this->numerateur += denominateur;
  return tmp;
}

std::ostream& MATH::operator<<(std::ostream& os, const MATH::Fraction& f1)  
{  
  os << f1.getnumerateur() << '/' << f1.getdenominateur();  
  return os;  
} 
