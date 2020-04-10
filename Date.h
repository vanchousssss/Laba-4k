#pragma once
#include "Triad.h"


class Date :public Triad
{
public:
	Date(void);


public:
	~Date(void);
	Date(int, int, int);
	Date(const Date&);
	Date& operator = (const Date&);
	Date& operator++();
	Date operator++(int);
	Date& foo_day(int);
	Date& foo_month(int);
	friend istream& operator>>(istream& in, Date& d);
	friend ostream& operator<<(ostream& out, const Date& d);
	friend bool operator>(const Date& d1, const Date& d2);
	friend bool operator<(const Date& d1, const Date& d2);
	friend bool operator==(const Date& d1, const Date& d2);

protected:
	int first;
	int second;
	int third;


};
