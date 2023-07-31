#include <iostream>

using namespace std;

void bubblesort(int a[], int n)
{
    int s = 0;
    for (int count = 1; count <= n - 1; count++)
    {   
        int flag =0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
            s++;
        }
        if (flag == 0)
        {
            break;
        }
        
    }
    cout << s << endl;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    bubblesort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}