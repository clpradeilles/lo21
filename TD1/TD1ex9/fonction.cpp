#include<stdio.h>
#include<iostream>

void exercice_surcharge()
{
    int i=3,j=15;
    float x=3.14159,y=1.414;
    char c = 'A';
    double z=3.14159265;
    fct(i); //appel 1
    fct(x); //appel 2
    fct(i,y); //appel 3
    fct(x,j); //appel 4
    fct(c); //appel 5
    fct((float)i,j); //appel 6
    fct((float)i,c); //appel 7
    fct(i,z); //appel 8
    fct((float)z,(int)z); //appel 9
}
