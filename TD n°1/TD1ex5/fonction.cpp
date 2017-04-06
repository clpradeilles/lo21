#include<stdio.h>
#include<iostream>

using namespace std;

void exerciceA(){
    int r;
    double p, s;
    const double PI = 3.14159;

    cout <<"donnez le rayon entier d un cercle:"<< "\n";
    cin >> r;
    p=2*PI*r;
    s=PI*r*r;
    cout << "le cercle de rayon " << r;
    cout << " a un perimetre de " << p << " et une surface de " << s << "\n";
}
