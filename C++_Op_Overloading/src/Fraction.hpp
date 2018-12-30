#ifndef FRACTION_HPP_INCLUDED
#define FRACTION_HPP_INCLUDED
#include <iostream>
#include <cassert>
class Fraction
{
private:
	int m_numerator;
	int m_denominator;

	double getDecimal() const;
public:
	Fraction(const int &numerator = 0, const int &denominator = 0);

	/****friend function operator overloading****/

	//Fraction output stream operator overload
	friend std::ostream& operator<< (std::ostream &out, const Fraction &fraction);

	//Fraction addition operator
	friend Fraction operator+(const Fraction &f1, const Fraction &f2);
	friend Fraction operator+(const Fraction &fraction, const int &val);
	//Fraction subtracting operator
	friend Fraction operator-(const Fraction &f1, const Fraction &f2);
	friend Fraction operator-(const Fraction &fraction, const int &val);

	//Fraction multiplication operator
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, const int &val);

	//Fraction comparison operators
	friend bool operator==(const Fraction &f1, const Fraction &f2);
	friend bool operator!=(const Fraction &f1, const Fraction &f2);
	friend bool operator<(const Fraction &f1, const Fraction &f2);
	friend bool operator<(const Fraction &f1, const int &val);
	friend bool operator>(const Fraction &f1, const Fraction &f2);
	friend bool operator>(const Fraction &f1, const int &val);


	/****member function operator overloading****/

	Fraction& operator+=(const Fraction &fraction);
	Fraction& operator-=(const Fraction &fraction);

	//negative operator for the Fraction class
	//returns a negative copy of the fraction without modifying the original
	//the difference between this and the subtraction operator is that the negative operator takes no parameters 
	Fraction operator-() const;

	//!Fraction checks if a Fraction is false or not
	//this will return true if either the numerator or denominator equal 0
	bool operator!() const;

};

#endif //FRACTION_HPP_INCLUDED