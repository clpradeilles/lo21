#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    double x = 3.14;
    double y;
    const double PI = 3.14;

    // PI = 2 impossible const ne peut modifier sa valeur
    cout << "X faut : " << x << "\n";
    cout << "Y faut : " << y << " avant initialisation \n";
    y = 3.14;
    cout << "Y faut : " << y << " apres initialisation \n";
    exerciceA();
    return 0;
}
