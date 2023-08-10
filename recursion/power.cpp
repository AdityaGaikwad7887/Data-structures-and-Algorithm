#include <stdc++.h>
using namespace std;

int power(int n,int p)
{
    /// Base case 
    if (p==0) return 1;

    /// Recursive case and calculation
    int result = n*power(n , p - 1);


    return result;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<endl<<power(n,p); 
}