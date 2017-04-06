#include<stdio.h>
#include<iostream>
#include <string>

using namespace std;

struct personne {
    char nom[30];
    unsigned int age;
};

void raz(personne &p)
{
    strcpy(p.nom,"");
    p.age = 0;
}
void affiche_struct(const personne *p)
{
    cout<<"Je m'appelle : "<< p->nom <<" et j'ai : " << p->age << " ans" << "\n";
}
void affiche_tab(personne tab[], int nb)
{
    for (int i = 0; i < nb; i++)
        affiche_struct(&tab[i]);

}
int lenght(const char tab[])
{
    int i = 0;
    while (tab[i] != '\0')
        i++;
    return i;
}
void init(personne &p,int age, const char nom[])
{
    int i = 0;
    p.age = age;
    int lght = lenght(nom);
    for (i = 0; i < lght; i++)
        p.nom[i] = nom [i];
    p.nom[i + 1] = '\0';
}
void copy_struct(personne &p1, personne &p2)
{
    strcpy(p1.nom, p2.nom);
    p1.age = p2.age;

}
void copy_tab(personne tab1[], personne tab2[], int nb) // meme taille pour tableau
{
    for (int i = 0; i < nb; i++)
        tab1[i] = tab2[i];
    
}
int main()
{
    personne p;
    personne p1;
    personne p2;
    personne tab[3];
    personne tab2[3];raz(p);
    raz(p1);
    init(p2, 14,"Clement");
    copy_struct(p1,p2);
    tab[0] = p;
    tab[1] = p2;
    tab[2] = p1;
    affiche_tab(tab, 3);
    copy_tab(tab2, tab,3);
    affiche_tab(tab2, 3);

    return 0;
}
