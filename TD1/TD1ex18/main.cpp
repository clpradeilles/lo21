#include<iostream>
#include<string>


using namespace std;

struct compte {
    char id[20];
    int solde;
};

int& operation(compte c[], char id[])
{
    for (int i = 0; i < 4; i++)
    {
        if (!(strcmp(c[i].id,id)))
            return c[i].solde;
    }
    int i = 0;
    return i;
        
}
void essai_comptes(){
    compte tab[4]={ {"courant", 0},{"codevi", 1500 }, {"epargne", 200 }, { "cel", 300 } };
    operation(tab,"courant") = 100;
    operation(tab,"codevi") += 100;
    operation(tab,"cel") -= 50;
    for(int i=0; i<4; i++)
        cout<<tab[i].id<<" : "<< tab[i].solde <<"\n";
}
int main()
{
    essai_comptes();
    return 0;
}
