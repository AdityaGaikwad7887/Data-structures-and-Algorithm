#include <stdc++.h>
using namespace std;

// My code before watching solution //

int count_digits (int n)
{
    static int x = 0;
    if (n==0)
    {
       return 0;
    }
    else if (n>0)
    {
        x++;
    }

    int temp = count_digits(n/10);

    return x;
}

// solution 
/*
int count_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int digit = count_digits(n / 10);

    return digit + 1;
}

*/

int main()
{
    int n;
    cin >> n;
    cout << count_digits(n) << endl;
}