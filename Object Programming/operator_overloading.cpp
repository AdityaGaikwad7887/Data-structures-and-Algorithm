#include <iostream>
using namespace std;

class fraction
{
    int numerator;
    int denominator;

public:
    fraction() {}
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int shownum()
    {
        return numerator;
    }
    int showden()
    {
        return denominator;
    }

    // pre increment
    fraction operator++()
    {
        fraction f;
        numerator = numerator + denominator;
        f.numerator = numerator;
        f.denominator = denominator;
        return *this;
    }

    // post increment
    fraction operator++(int)
    {
        fraction f;
        f.numerator = numerator ;
        f.denominator = denominator;
        numerator = numerator + denominator;
        return *this;
    }

    // pre decrement 
    fraction operator--()
    {
        numerator = numerator - denominator;
        this->numerator = numerator ;
        this->denominator = denominator;
        return *this;
    }

    // post decrement
    fraction operator--(int)
    {
        this->numerator = numerator ;
        this->denominator = denominator;
        numerator = numerator - denominator;
        return *this;
    }

    // equal
    fraction operator=(fraction f1)
    {
        fraction temp;
        temp.numerator = f1.numerator;
        temp.denominator = f1.denominator;
        return temp;
    }
    
};

ostream& operator <<(ostream& out,fraction f1)
{
    cout<<f1.shownum()<<"/"<<f1.showden()<<endl;
    return cout;
}



class calculator
{
    int num1, num2;

public:
    calculator(){};
    calculator(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    int output()
    {
        return num1 + num2;
    }
    calculator operator+(calculator c1)
    {
        calculator temp;
        temp.num1 = num1 + c1.num1;
        temp.num2 = num2 + c1.num2;
        return temp;
    }
    int operator==(calculator c1)
    {
        if (num1 == c1.num1 && num2 == c1.num2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    // calculator C1(2,3),C2(2,3),C3;
    // C3 = C1 + C2;
    // cout<<C3.output()<<endl;

    // if (C1==C2)
    // {
    //     cout<<"Same objects"<<endl;
    // }
    // else{
    //     cout<<"Diffrent objects"<<endl;
    // }

    fraction f1(2, 3);
    // f1++;
    // fraction f2 = ++f1;
    // fraction f2 = f1++;
    // ++f1;
    // f1++;



    // int i = 0;
    // // cout<<f1++;
    // cout<<++f1<<endl<<f1++<<endl;
    // cout<<++i<<i++<<endl;

    
    return 0;
}



//// Note ////

/// this code haveing error ///s