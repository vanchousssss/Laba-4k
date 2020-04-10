#include "Date.h"

Date::Date(void) :Triad()
{
}

Date::~Date(void)
{
}

Date::Date(int f, int s, int t) :Triad(f, s, t)
{
}

Date::Date(const Date& d)
{
	first = d.first;
	second = d.second;
	third = d.third;

}

Date& Date::operator=(const Date& d)
{
	if (&d == this)return *this;
	first = d.first;
	second = d.second;
	third = d.third;
	return *this;

}

istream& operator>>(istream& in, Date& d)
{
	int k;
	cout << "\nyears: "; in >> d.first;
	d.first = d.first % 365;
	cout << "\nmonths: "; in >> d.second;
	if (d.second / 12 >= 1)
	{
		d.first = d.first + (d.second / 12);
		d.second = d.second % 12;
	}
	cout << "\ndays: "; in >> d.third;
	if (d.third / 365 >= 1)
	{
		d.first = d.first + (d.third / 365);
		d.second = d.second % 365;
	}
	if (d.third / 30 >= 1)
	{
		d.second = d.second + (d.third / 30);
		d.third = d.third % 30;
	}
	return in;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << "\nyears: " << d.first;
	out << "\nmonths: " << d.second;
	out << "\ndays: " << d.third;
	return out;
}

Date& Date::operator++()
{
	first++;
	second++;
	third++;
	return *this;
}

Date Date::operator++(int)
{
	first++;
	second++;
	third++;
	Date t(first, second, third);
	return t;
}
Date& Date::foo_day(int n)
{
	int temp = first * 365 + second * 30 + third;
	temp = temp + n;
	first = temp % 365;
	temp = temp - (first * 365);
	second = temp % 30;
	temp = temp - (second * 30);
	third = temp;
	return *this;
}

Date& Date::foo_month(int n)
{
	int temp = first * 365 + second * 30 + third;
	temp = temp + n * 30;
	first = temp / 365;
	temp = temp - (first * 365);
	second = temp / 30;
	temp = temp - (second * 30);
	third = temp;
	return *this;
}


bool operator>(const Date& d1, const Date& d2)
{
	if (d1.third > d2.third) return true;
	if (d1.third < d2.third) return false;
	if (d1.second > d2.second) return true;
	if (d1.second < d2.second) return false;
	if (d1.first > d2.first) return true;
	else return false;
}


bool operator<(const Date& d1, const Date& d2)
{
	if (d1.third > d2.third) return false;
	if (d1.third < d2.third) return true;
	if (d1.second > d2.second) return false;
	if (d1.second < d2.second) return true;
	if (d1.first > d2.first) return false;
	else return true;
}


bool operator==(const Date& d1, const Date& d2)
{
	if (d1.third != d2.third) return false;
	if (d1.third == d2.third) return true;
	if (d1.second != d2.second) return false;
	if (d1.second == d2.second) return true;
	if (d1.first != d2.first) return false;
	else return true;
}
