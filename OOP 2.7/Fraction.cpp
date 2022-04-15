//Fraction.cpp
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
#include "Fraction.h"

using namespace std;
Fraction& Fraction::operator=(const Fraction& h)
{
    c = h.c;
    d = h.d;
    return *this;
}


Fraction::operator string() const
{
    stringstream sout, ss;
    ss << d;
    sout << ss.str().substr(ss.str().find('.'));
    return sout.str();

}

Fraction::Fraction(LongLong ll, double dd)
{
    c = ll;
    d = dd;
}

Fraction::Fraction(const Fraction& g)
{
    c = g.c;
    d = g.d;
}

Fraction::~Fraction()
{
}

ostream& operator<<(ostream& out, const Fraction& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, Fraction& r)
{
    cout << "c: " << endl; in >> r.c;
    cout << "d: " << endl; in >> r.d;
    cout << endl;
    return in;
}

bool operator < (const Fraction& c1, const Fraction& c2)
{
    return (c1.get_c() < c2.get_c() ||
        (c1.get_c() == c2.get_c() &&
            c1.get_d() < c2.get_d()));
}

bool operator <= (const Fraction& c1, const Fraction& c2)
{
    return !(c1 > c2);
}

bool operator > (const Fraction& c1, const Fraction& c2)
{
    return (c1.get_c() > c2.get_c() ||
        (c1.get_c() == c2.get_c() &&
            c1.get_d() > c2.get_d()));
}

bool operator >= (const Fraction& c1, const Fraction& c2)
{
    return !(c1 < c2);
}

bool operator == (const Fraction& c1, const Fraction& c2)
{
    bool tmp = (c1.get_c() == c2.get_c() &&
        c1.get_d() == c2.get_d());
    return tmp;
}

bool operator != (const Fraction& c1, const Fraction& c2)
{
    return !(c1 == c2);
};

