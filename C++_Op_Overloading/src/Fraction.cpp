#include "Fraction.hpp"

Fraction::Fraction(const int &numerator, const int &denominator)
	: m_numerator{ numerator }, m_denominator{ denominator }
{

}

double Fraction::getDecimal() const
{
	assert(m_denominator != 0);
	double decimal{ static_cast<double>(m_numerator) / static_cast<double>(m_denominator) };
	return decimal;
}

//prints out a fraction
std::ostream& operator<< (std::ostream &out, const Fraction &fraction)
{
	out << fraction.m_numerator << "/" << fraction.m_denominator;
	return out;
}

Fraction operator+(const Fraction &f1, const Fraction &f2)
{
	return Fraction((f1.m_numerator + f2.m_numerator), (f1.m_denominator + f2.m_denominator));
}

Fraction operator+(const Fraction &fraction, const int &val)
{
	return Fraction((fraction.m_numerator + val), fraction.m_denominator);
}

Fraction operator-(const Fraction &f1, const Fraction &f2)
{
	return Fraction((f1.m_numerator - f2.m_numerator), (f1.m_denominator - f2.m_denominator));
}

Fraction operator-(const Fraction &fraction, const int &val)
{
	return Fraction((fraction.m_numerator - val), fraction.m_denominator);
}

bool operator==(const Fraction &f1, const Fraction &f2)
{
	return (f1.m_numerator == f1.m_numerator && f1.m_denominator == f2.m_denominator);
}

bool operator!=(const Fraction &f1, const Fraction &f2)
{
	return (f1.m_numerator != f1.m_numerator || f1.m_denominator != f2.m_denominator);
}

bool operator<(const Fraction &f1, const Fraction &f2)
{
	return (f1.m_numerator < f1.m_numerator && f1.m_denominator < f2.m_denominator);
}

bool operator<(const Fraction &f1, const int &val)
{
	return ((f1.getDecimal()) < val);
}

bool operator>(const Fraction &f1, const Fraction &f2)
{
	return (f1.m_numerator > f1.m_numerator && f1.m_denominator > f2.m_denominator);
}

bool operator>(const Fraction &f1, const int &val)
{
	return ((f1.getDecimal()) > val);
}

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f1.m_denominator);
}
Fraction operator*(const Fraction &f1, const int &val)
{
	return Fraction(f1.m_numerator * val, f1.m_denominator);
}


Fraction& Fraction::operator+=(const Fraction &fraction)
{
	m_numerator += fraction.m_numerator;
	m_denominator += fraction.m_denominator;
	return *this;
}

Fraction& Fraction::operator-=(const Fraction &fraction)
{
	m_numerator -= fraction.m_numerator;
	m_denominator -= fraction.m_denominator;
	return *this;
}

//negative operator
Fraction Fraction::operator-() const
{
	return Fraction(-m_numerator, m_denominator);
}


bool Fraction::operator!() const
{
	return (m_numerator == 0 || m_denominator == 0);
}
