#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class Vector{
private:
    int n;
    int*v;
public:
    Vector():n(0),v(nullptr){}
    Vector(int*,int);
    Vector(const Vector&);
    Vector(int,int);
    ~Vector();
    void UpdateVect(int,int);
    int Sum();
    void FindMax();
    void Sort();
    Vector& operator =(const Vector&);
    int operator *(Vector&b);
    friend istream& operator>>(istream&in, Vector&);
    friend ostream& operator<<(ostream&out,const Vector&);
    friend void ReadVect(Vector*&,int);
    friend void DisplayVect(Vector*,int);
};

#endif // VECTOR_H_INCLUDED
