#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    int n;
    cout<<"n="; cin>>n;
    Vector *a;
    ReadVect(a,n);
    DisplayVect(a,n);
    delete []a;
}
