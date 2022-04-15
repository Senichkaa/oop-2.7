//LongLong.h
#pragma once
#include <string>
#include <iostream>
using namespace std;
class LongLong
{
private:
	long a; //starsha
	unsigned long b; //molodscha
public:
	LongLong();
	LongLong(long, unsigned long);
	LongLong(const LongLong&);
	~LongLong();

	long get_a() const { return a; };
	unsigned long get_b() const { return b; };
	void set_a(long a) { this->a = a; };
	void set_b(unsigned long b) { this->b = b; };

	LongLong& operator = (const LongLong&);
	operator string() const;
	
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);

	friend bool operator > (const LongLong& c1, const LongLong& c2);
	friend bool operator < (const LongLong& c1, const LongLong& c2);
	friend bool operator == (const LongLong& c1, const LongLong& c2);
	friend bool operator != (const LongLong& c1, const LongLong& c2);
	friend bool operator >= (const LongLong& c1, const LongLong& c2);
	friend bool operator <= (const LongLong& c1, const LongLong& c2);

};
	
