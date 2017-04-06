#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>

namespace MATH {
    class Fraction
    {
        private :
        int denominateur;
        int numerateur;
	void simplification();

        public :
	int getnumerateur() const { return numerateur; };
	int getdenominateur() const { return denominateur; };
        void setFraction(int n, int d);
    Fraction():numerateur(0),denominateur(1){std::cout<<"Fraction initialisé à 0 \n";};
    Fraction(int n):numerateur(n),denominateur(1){std::cout<<"Fraction initialisé avec le dénominateur à 1 \n";};
	Fraction(int n, int d);
	~Fraction(){};
	Fraction operator++();
	Fraction operator++(int);;
    };
    Fraction operator+(const Fraction& f1, const Fraction& f2);
    std::ostream& operator<<(std::ostream& os, const Fraction& f1);
};
class FractionException{
 private :
  std::string info;
 public :
 FractionException(const std::string& s):info(s){};
  const std::string& getinfo() const { return info; };
};

#endif // FRACTION_H_INCLUDED
