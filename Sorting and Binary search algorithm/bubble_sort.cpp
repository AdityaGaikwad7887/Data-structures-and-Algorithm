#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, count = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v.at(j) >= v.at(j + 1))
            {
                swap(v.at(j), v.at(j + 1));
            }
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl
         << count << endl;
    return 0;
}