#pragma once
class Rational
{
private:
	double a, b;
public:

	void Init(double a, double b);
	void Read();
	void Display();
	double getA() { return a; }
	double getB() { return b; }
	void setA(double value);
	void setB(double value);

	double value();
	double add(Rational& l, Rational& r);
	double add_2(Rational& l, Rational& r);
	double sub(Rational& l, Rational& r);
	double sub_2(Rational& l, Rational& r);
	double mul(Rational& l, Rational& r);
	double mul_2(Rational& l, Rational& r);

};
