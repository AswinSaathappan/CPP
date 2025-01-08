/*6. Create a structure named Complex to represent a complex number with real and
imaginary parts. Write a C++ program to add and multiply two complex numbers.*/
#include<iostream>
using namespace std;
struct complex
{
        int real;
        int imag;
        void input_data()
        {
                cout<<"Enter real part:";
                cin>>real;
                cout<<"Enter imaginary part:";
                cin>>imag;
        }
        void print_data()
        {
               cout<<real<<"+"<<imag<<"i";
        }
        complex add(complex c1,complex c2)
        {
                complex c3;
                c3.real=c1.real+c2.real;
                c3.imag=c1.imag+c2.imag;
                return c3;
       }
        complex multiply(complex c1,complex c2)
        {

                complex c3;
                c3.real = c1.real*c2.real - c1.imag*c2.imag;
                c3.imag = c1.real*c2.imag + c1.imag*c2.real;
                return c3;
        }
};

int main(){
        complex c1,c2,c3,c4;
        cout<<"Enter first complex number:\n";
        c1.input_data();
        c1.print_data();
        cout<<"\nEnter second complex number:\n";
        c2.input_data();
        c2.print_data();
        cout<<"\nAddition of complex numbers:\n";
        c3=c3.add(c1,c2);
        c3.print_data();
        cout<<"\nMultiplication of complex numbers:\n";
        c4=c4.multiply(c1,c2);
        c4.print_data();
}
