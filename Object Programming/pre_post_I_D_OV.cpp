#include <iostream>
using namespace std;

class number
{
    int n;

public:
    number() {}
    number(int o)
    {
        this->n = o;
    }
    int show()
    {
        return this->n;
    }

    //pre increament
    number operator++()
    {
        number n1;
        this->n = this->n + 1;
        n1.n = this->n;
        return n1;
    }

    //post increament
    number operator++(int)
    {
        number n1;
        n1.n = this->n;
        this->n = this->n + 1;
        return n1;
    }

    //pre decreament
    number operator--()
    {
        number n1;
        this->n = this->n - 1;
        n1.n = this->n;
        return n1;
    }
    
    //post decreament
    number operator--(int)
    {
        number n1;
        n1.n = this->n;
        this->n = this->n - 1;
        return n1;
    }
};

ostream& operator <<(ostream& out, number n1)
{
    cout<<n1.show()<<endl;
    return cout;
}

int main()
{
    number n(2);
    cout<<n++<<endl;
    cout<<++n<<endl;
    return 0;
}