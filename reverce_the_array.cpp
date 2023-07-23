#include <iostream>
using namespace std;

int main()
{   int n;
    cin>>n;
    int A[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>A[i];
    }
    int s=0 ,e=n-1;
    for (int i=0 ; i<(n/2) ; i++)
    {
        swap(A[s],A[e]);
        s++;
        e--;   
    }
    for (int i=0 ; i<n ; i++)
    {
        cout<<A[i]<<" ";
    }
}