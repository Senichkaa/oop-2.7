//Fraction.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "LongLong.h"

class Fraction
{
private:
	LongLong c; // dovge chile zi znakom
	double d; //bezznakove korotke chile
public:
	void set_c(LongLong c) { this->c = c; };
	void set_d(double d) { this->d = d; };
	LongLong get_c() const { return c; };
	int get_d() const { return d; };

	Fraction(LongLong = LongLong(0,0), double = 0);
	Fraction(const Fraction&);
	~Fraction();

	Fraction& operator = (const Fraction&);
	operator string() const;

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);

	friend bool operator > (const Fraction& c1, const Fraction& c2);
	friend bool operator < (const Fraction& c1, const Fraction& c2);
	friend bool operator == (const Fraction& c1, const Fraction& c2);
	friend bool operator != (const Fraction& c1, const Fraction& c2);
	friend bool operator >= (const Fraction& c1, const Fraction& c2);
	friend bool operator <= (const Fraction& c1, const Fraction& c2);
};

