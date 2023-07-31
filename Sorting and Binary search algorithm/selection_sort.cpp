#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    while (x <= n)
    {
        for (int i = x + 1; i < n; i++)
        {
            if (a[x] > a[i])
            {
                swap(a[i], a[x]);
            }
        }
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
    return 0;
}