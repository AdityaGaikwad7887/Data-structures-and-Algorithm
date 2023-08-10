#include <stdc++.h>
using namespace std;

int count_zero(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int temp = count_zero(n / 10);

    if (n % 10 == 0)
    {
        return temp+1;
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    cout << count_zero(n);
}