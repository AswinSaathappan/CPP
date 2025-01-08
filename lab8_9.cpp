/*9. Create a class RationalNumber (fractions) with the following capabilities:
a. Create a constructor that prevents a 0 denominator in a fraction, reduces or
simplifies fractions that are not in reduced form and avoids negative
denominators.
b. Overload the addition, subtraction, multiplication and division operators for this
class.
c. Overload the relational and equality operators for this class.*/

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	while(b!=0)
	{
	int temp=b;
	b=a%b;
	a=temp;
    }
	return a;
}
class RationalNumber{
	int num;
	int den;
	
	public:
	RationalNumber(int numerator=0 ,int denominator=1)
	{
		if(denominator==0) {
        cout<<"Error: Denominator cannot be zero. Setting denominator to 1." << endl;
        denominator=1;
    }
    if(numerator<0 && denominator<0) {
        numerator=-numerator;
        denominator=-denominator;
    }
		int divisor=gcd(numerator,denominator);
	    num=numerator/divisor;
		den=denominator/divisor;
	}
	
	RationalNumber operator + (RationalNumber q)
	{
		int newnum=num*q.den + q.num*den;
		int newden=den*q.den;
		return RationalNumber(newnum,newden);
	}

	RationalNumber operator - (RationalNumber q)
	{
		int newnum=num*q.den - q.num*den;
		int newden=den*q.den;
		return RationalNumber(newnum,newden);
	}
	
	RationalNumber operator * (RationalNumber q)
	{
		int newnum=num *q.num;
		int newden=den *q.den;
		return RationalNumber(newnum,newden);
	}
	
		RationalNumber operator / (RationalNumber q)
	{
		int newnum=num*q.den;
		int newden=den*q.num;
		return RationalNumber(newnum,newden);
	}
	
	bool operator < (RationalNumber q)
	{
		return (num*q.den < q.num*den);
	}
	
	bool operator > (RationalNumber q)
	{
		return (num*q.den > q.num*den);
    } 

    bool operator == (RationalNumber q)
	{
		return (num*q.den == q.num*den);
    } 	  
	 
	friend ostream &operator<<(ostream &out, RationalNumber &r) {
    out << r.num << "/" << r.den;
    return out;
}

};

int main()
{
	RationalNumber p(10,10);
	cout<<p<<endl;
	RationalNumber q(6,12);
    cout<<q<<endl;
    RationalNumber r=p+q;cout<<"ADDITION: ";
    cout<<r<<endl;
    RationalNumber s=p-q;cout<<"SUBTRACTION: ";
    cout<<s<<endl;
    RationalNumber t=p*q;cout<<"MULTIPLICATION: ";
    cout<<t<<endl;
    RationalNumber u=p/q;cout<<"DIVISION: ";
    cout<<u<<endl;
    
    if (p < q) {
        cout << "p is lesser than q" << endl;
    } else if (p > q) {
        cout << "p is greater than q" << endl;
    } else {
        cout << "p and q are equal" << endl;
    }
}
