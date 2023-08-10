#include <stdc++.h>
using namespace std;

int fibonacci(int n)
{
    /// Base  case
    if(n==0) return 0;
    if(n==1) return 1;

    /// Recursive case
    int smalloutput1 = fibonacci(n-1);
    int smalloutput2 = fibonacci(n-2);

    /// Calculation
    return smalloutput1 + smalloutput2 ;

}

int main()
{
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    cout<<"fibonacci value at that place is : "<<fibonacci(n)<<endl;
    return 0;
}