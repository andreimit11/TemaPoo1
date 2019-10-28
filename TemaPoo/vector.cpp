#include <iostream>
#include "vector.h"
using namespace std;

//-constructor pentru initializarea cu un numar dat pe toate componentele
Vector::Vector(int x,int n=0){
    this->n=n;
    this->v=new int[n];
    for(int i=0;i<n;i++){
        this->v[i]=x;
    }
}
//-constructori pentru initializare si copiere
Vector::Vector(int v[],int n){
    this->n=n;
    this->v=new int[n];
    for(int i=0;i<n;i++){
        this->v[i]=v[i];
    }
}
Vector::Vector(const Vector&for_copy){
    this->n=for_copy.n;
    this->v=new int[n];
    for(int i=0;i<n;i++){
        this->v[i]=for_copy.v[i];
    }
}
//-destructor
Vector::~Vector(){  delete [](this->v); /*cout<<"\nVector destroyed\n";*/ }
//-metoda-operator pubic de atribuire =
Vector& Vector::operator=(const Vector& b){
    if(&b==this) { return *this; }
    delete []this->v;
    this->n=b.n;
    this->v=new int[this->n];
    for(int i=0;i<n;i++){
        this->v[i]=b.v[i];
    }
   return *this;
}
//-metoda publica pentru reactualizarea nr de componente si initializarea componentelor cu un nr dat
void Vector::UpdateVect(int x,int n){
    delete [](this->v);
    this->n=n;
    this->v=new int[n];
    for(int i=0;i<n;i++){
        this->v[i]=x;
    }
}
//-metoda publica pentru calculul sumei tuturor elementelor vectorului
int Vector::Sum(){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+(this->v[i]);
    }
    return s;
}
//-metoda publica pentru gasirea maximului si a pozitiei lui
void Vector::FindMax(){
    int m=this->v[0], poz=0;
    for(int i=1;i<n;i++){
        if(this->v[i]>m) { m=this->v[i]; poz=i; }
    }
    cout<<"\nMax="<<m<<"\nMax_pozition="<<poz<<"\n";
}
//-metoda publica pentru sortarea crescatoare a vectorului
void Vector::Sort(){
//Insertion sort
    int i,t,j;
    for (i = 1; i <(this->n);i++){
        t= this->v[i];
        j= i-1;
        while (j >= 0 &&(this->v[j])>t)
        {
            this->v[j+1]=this->v[j];
            j = j - 1;
        }
        this->v[j+1]=t;
    }
}
//-produsul scalar a 2 vectori de aceeasi lungime, implementat prin supraincarcarea operatorului *
int Vector::operator  *(Vector&b)
{
    int p=0;
    for(int i=0;i<n;i++){
        p=p+(this->v[i])*(b.v[i]);
    }
    return p;
}
//-supraincarcarea operatorilor << si >> pentru iesiri si intrari de obiecte
istream& operator >>(istream &in,Vector&a)
{
    cout<<"Introduceti numarul de elemente:\n";
    in>>a.n;
    a.v=new int[a.n];
    cout<<"Introduceti elementele vectorului: \n";
    for(int i=0;i<a.n;i++){
        in>>a.v[i];
    }
    return in;
}
ostream& operator <<(ostream &out,const Vector&a)
{
    out<<"\n";
    for(int i=0;i<a.n;i++){
        out<<a.v[i]<<" ";
    }
    return out;
}
//-functii publice pentru citirea informatiilor complete a n obiecte, memorarea si afisarea acestora
void ReadVect(Vector*&a,int n)
{
    a=new Vector[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void DisplayVect(Vector*a,int n)
{
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
