#include <stdc++.h>
using namespace std;

//// This code is only work on strings without other things than integers like "63554"  ////

int length(char a[])  // user build function calculate length of array
{
    if (a[0] == '\0')
    {
        return 0;
    }
    return length(a + 1) + 1;
}

long long str_to_int(char a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    long long temp = str_to_int(a, n - 1);

    int lastdigit = a[n - 1] - '0';    // this converts char array to string
    return temp * 10 + lastdigit;      // calculation for adding last digit
}

int main()
{
    char a[100];
    cin >> a;
    int n = length(a);

    cout << str_to_int(a, n) << endl;
    return 0;
}