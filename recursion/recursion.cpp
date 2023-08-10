#include <stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        fact = n * factorial(n - 1);
    }
    return fact;
}

int main()
{
    int a;
    while (a >= 0)
    {
        cout << "Enter number : ";
        cin >> a;
        cout << "Factorial is : " << factorial(a) << endl;
    }

    return 0;
}