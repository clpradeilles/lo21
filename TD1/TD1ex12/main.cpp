#include <iostream>
#include<iostream>

using namespace std;

void inverse1(int *a, int *b)
{
    cout << "coucou";
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}
void inverse(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

}
int main()
{
    int *pt1 = new int;
    int *pt2 = new int;
    *pt1 = 2;
    *pt2 = 4;
    int c = 6;
    int d = 8;
    cout << "Avant modification a vaut : "<< *pt1 <<" et b vaut : "<< *pt2 << "\n";
    inverse1(pt1,pt2);
    cout << "Apres modification a vaut : "<< *pt1 <<" et b vaut : "<< *pt2 << "\n";
    cout << "Avant modification a vaut : "<< c <<" et b vaut : "<< d << "\n";
    inverse(c,d);
    cout << "Apres modification a vaut : "<< c <<" et b vaut : "<< d << "\n";
    return 0;
}
