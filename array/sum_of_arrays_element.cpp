#include<iostream>
using namespace std;

int main()
{
    int n, Sum=0;
    cin>>n;
    int A[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>A[i];
    }
    
    for (int i=0 ; i<n ; i++)
    {
        Sum +=A[i];
    }
    cout<<"The sum is "<<Sum<<endl;
    return 0;

}