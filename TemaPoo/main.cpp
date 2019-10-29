#include <iostream>
#include "vector.h"
using namespace std;

int main()
{

    //-constructor pentru initializarea cu un numar dat pe toate componentele
    Vector a(4,6);
    cout<<a; //supraincarcarea operatorului << pentru iesiri de obiecte
    //-metoda publica pentru reactualizarea nr de componente si initializarea componentelor cu un nr dat
    a.UpdateVect(3,4);
    cout<<a;
    //-constructor copiere
    Vector b(a);
    //-constructori pentru initializare
    int v[]={2,1,5,3,4};
    Vector c(v,5);
    cout<<c;
    //-metoda-operator pubic de atribuire =
    Vector d;
    d=c;
    //-metoda publica pentru calculul sumei tuturor elementelor vectorului
    cout<<"\nSuma elementelor este "<<c.Sum();
    //-metoda publica pentru gasirea maximului si a pozitiei lui
    c.FindMax();
    //-metoda publica pentru sortarea crescatoare a vectorului
    c.Sort();
    cout<<c;
    cout<<d;
    //-produsul scalar a 2 vectori de aceeasi lungime, implementat prin supraincarcarea operatorului *
    cout<<'\n'<<c*d<<'\n';
    //supraincarcarea operatorilor << si >> pentru iesiri si intrari de obiecte
    Vector t;
    cin>>t;
    cout<<t<<'\n';
    //-functii publice pentru citirea informatiilor complete a n obiecte, memorarea si afisarea acestora
    int n;
    cout<<"Nr de vectori: "; cin>>n;
    Vector *r;
    ReadVect(r,n);
    DisplayVect(r,n);
    delete []r;
}
