#include <stdc++.h>
using namespace std;

void reverseprint(vector<char> v, int i)
{
    if (v.size() == i)
    {
        return;
    }
    // cout << v.at(i); // for just print array
    reverseprint(v, i + 1);
    cout << v.at(i); // this line print array reversely because it's after the recursion
}

int main()
{
    vector<char> v;
    int a;
    char x;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    reverseprint(v, 0);
    return 0;
}