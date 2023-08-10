#include <stdc++.h>
using namespace std;

int multi(int m, int n)
{
    
    if (n==0)
    {
        return 0;
    }
    
    int temp  = multi(m,n-1);
    
    return temp + m;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<multi(m,n);
    return 0;
}