#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int largest = INT_MIN ;
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n ; i++)
    {
        cin>>A[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (A[i] > largest)
        {
            largest = A[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}