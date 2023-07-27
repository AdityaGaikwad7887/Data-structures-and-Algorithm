#include <iostream>
using namespace std;


class Complex 
{  
   double real;
   double imag;

   public:
   Complex(double real,double imag)
   {
    this->real = real;
    this->imag = imag;
   }
   friend void multiplie(Complex , Complex);

};

void multiplie(Complex o1, Complex o2)
{ 

    double X,Y;
    X = ((o1.real * o2.real) - (o1.imag * o2.imag));
    Y = ((o1.real * o2.imag) + (o1.imag * o2.real));
    cout<<X<<" + "<<Y<<"i"<<endl;
}

//Use the formula z1 * z2 = (ac - bd) + (ad + bc)i, where z1 = a + bi and z2 = c + di.

int main()
{
    double real ,imag;

    cout<<"real part = ";
    cin>>real;
    cout<<"imag part = ";
    cin>>imag;
    Complex C1(real,imag),C2(real,imag); 
    multiplie(C1,C2);
    return 0;

}