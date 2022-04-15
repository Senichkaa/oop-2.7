//LongLong.cpp
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#include "LongLong.h" 
#include "Fraction.h"
using namespace std;
LongLong::LongLong()
{
	a = 0;
	b = 0;
}
LongLong::LongLong(long x = 0, unsigned long y = 0)
{
	a = x;
	b = y;
}
LongLong::LongLong(const LongLong& g)
{
	a = g.a;
	b = g.b;
}
LongLong::~LongLong()
{
}

LongLong& LongLong::operator=(const LongLong& x)
{
	a = x.a;
	return *this;
}

LongLong::operator string() const
{
	stringstream ss;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;

	return ss.str();
}

ostream& operator<<(ostream& out, const LongLong& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, LongLong& r)
{
	cout << "A = "; in >> r.a;
	cout << "B = "; in >> r.b;
	cout << endl;
	return in;
}

bool operator >(const LongLong& c1, const LongLong& c2)
{
	return (c1.get_a() > c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
		c1.get_b() > c2.get_b()));
}

bool operator >=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 < c2);
}

bool operator <(const LongLong& c1, const LongLong& c2)
{
	return (c1.get_a() < c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
		c1.get_b() < c2.get_b()));
}

bool operator <=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 > c2);
}

bool operator ==(const LongLong& c1, const LongLong& c2)
{
	return  c1.get_a() == c2.get_a() &&
		c1.get_b() == c2.get_b();
}

bool operator !=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 == c2);
}

/*long long LongLong::getLongLong() const
{
	long g[2] = { b, a };
	return *(long long*)g;
}*/
