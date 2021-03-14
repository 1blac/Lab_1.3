#include "RATIONAL.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void Rational::Display()
{
	cout << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
void Rational::Init(double A, double B)
{
	a = A;
	b = B;
}
void Rational::Read()
{
	double A, B;
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	cout << " b = "; cin >> B;
	Init(A, B);
}
void Rational::setA(double value)
{
	a = value;
}
void Rational::setB(double value)
{
	b = value;
}
double Rational::value()
{
	return 1. * a / b;
}

double Rational::add(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) + (r.a * l.b);
	return tmp;
}
double Rational::add_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational::sub(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b) - (r.a * l.b);
	return tmp;
}
double Rational::sub_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}
double Rational::mul(Rational& l, Rational& r)
{
	double tmp = l.a * r.a;
	return tmp;
}
double Rational::mul_2(Rational& l, Rational& r)
{
	double tmp = l.b * r.b;
	return tmp;
}