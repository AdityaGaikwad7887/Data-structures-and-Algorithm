#include <stdc++.h>
using namespace std;

/// Print numbers in Ascending Order

void print(int n)
{
    /// Base case
    if(n==0) return;
    
    /// Recursive case
    print(n-1);

    cout<<n;
    return ;
}

/// Print numbers in Descending Order
 
/*
void print(int n)
{
    /// Base case
    if(n==0) return;
    
    cout<<n;

    /// Recursive case
    print(n-1);
    return ;
}

*/

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}