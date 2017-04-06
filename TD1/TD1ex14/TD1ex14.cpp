#include <iostream>

using namespace std;

void truc1(int& x)
{ 
    std::cout<<x<<"\n";
    x++;
    std::cout<<x<<"\n";
}
void truc2(int& x){
    x++;
    truc1(x);
    x++;
}
void truc3(int& x){
    truc2(x);
    double y = x;
    const double& z = x;
    double& u = y;
    const double& t = y - 3;
}
int main()
{
    int tmp1 = 3;
    int &a = tmp1;
    int tmp = 5;
    int &b = tmp;
    truc1(a);
    truc2(b);
    truc3(a);
}
