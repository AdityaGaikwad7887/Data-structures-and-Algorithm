#include <stdc++.h>
using namespace std;


// my code & solution is nearby same //
int sum_of_digit(int n)
{
    // Base case
    if (n==0)
    {
        return 0;
    }
    
    // recursion 
    int temp = sum_of_digit(n/10);
    
    // calculation 
    return temp + n%10 ;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_of_digit(n)<<endl;
    return 0;
}