#include <iostream>

using namespace std;

struct essai
{
    int n;
    float x;
};
void raz(essai *a)
{
  a->n = 0;
  a->x = 0;
}

void raz(essai &a)
{
  a.n = 0;
  a.x = 0;
}
int main()
{
    essai test;
    test.n = 3;
    test.x = 3.35;
    raz (&test);
    cout<<"Apres raz on a n :"<< test.n <<"et on a x :" << test.x;
    test.n = 2;
    raz (test);
    cout<<"Apres raz on a n :"<< test.n <<"et on a x :" << test.x;
    return 0;
}
