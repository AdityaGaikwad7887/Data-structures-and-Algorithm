#include <stdc++.h>
using namespace std;


// checking start from first element of array 
bool checking1 (int a[] , int n , int target)
{
    if (n==0)
    {
        return false;
    }
    if (a[0] == target)
    {
        return true;
    }

    return checking1(a+1 , n-1 , target);    
    
}


// checking start from last element of array
bool checking2 (int a[] , int n , int target)
{
    if (n == 0 )
    {
       return false;
    }
    if (a[n-1] == target)
    {
        return true;
    }
    
    return checking2(a , n-1 , target );
    
}

//// we can solve this question using index i approch 
//// and this approch is exactelly as for loop approch

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>x;
        a[i] = x;
    }
    cout<<"Target : ";
    cin>>x;
    if (checking1(a , n , x) && checking2(a , n, x))
    {
        cout<<"element is present "<<endl;
        return 0;
    }
    else
    {
        cout<<"element is not persent "<<endl;
    }
    return 0;
}