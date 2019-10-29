#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class Vector{
private:
    int n;
    int*v;
public:
    Vector():n(0),v(nullptr){}  //-constructor pentru initializare default
    Vector(int*,int);       //-constructor pentru initializare cu un vector trimis ca parametru
    Vector(const Vector&);  //-constructor pentru copiere
    Vector(int,int);    //-constructor pentru initializarea cu un numar dat pe toate componentele
    ~Vector();      //-destructor
    void UpdateVect(int,int);   //-metoda publica pentru reactualizarea nr de componente si initializarea componentelor cu un nr dat
    int Sum();     //-metoda publica pentru calculul sumei tuturor elementelor vectorului
    void FindMax();     //-metoda publica pentru gasirea maximului si a pozitiei lui
    void Sort();    //-metoda publica pentru sortarea crescatoare a vectorului
    Vector& operator =(const Vector&);  //-metoda-operator pubic de atribuire =
    int operator *(Vector&b);   //-produsul scalar a 2 vectori de aceeasi lungime, implementat prin supraincarcarea operatorului *
    friend istream& operator>>(istream&in, Vector&);    //-supraincarcarea operatorului >>  pentru intrari  de obiecte
    friend ostream& operator<<(ostream&out,const Vector&);  //-supraincarcarea operatorului <<  pentru iesiri  de obiecte
    friend void ReadVect(Vector*&,int); //-functie publica pentru citirea si memorarea informatiilor complete a n obiecte
    friend void DisplayVect(Vector*,int); //-functie publica pentru afisarea informatiilor complete a n obiecte
};

#endif // VECTOR_H_INCLUDED
