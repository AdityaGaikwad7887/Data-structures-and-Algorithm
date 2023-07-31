#include <stdc++.h>
using namespace std;

int binary(int a[] ,int n,int key)
{
    int s = 0 , e = n;
    while (s<=e)
    {
        int mid((s+e)/2);
        if (a[mid]==key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
    }
    return -1;
    
}

int main()
{
    // char c;
    // cout<<"Enter your char : ";
    // cin>>c;
    // cout<<"Your char is : "<<c<<endl;
    int n, key;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    cout<<"After sorting array : ";
    for (int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout <<endl<< "Enter Key : ";
    cin >> key;
    cout<<"Key is persent at index : "<<binary(a,n,key)<<endl;
    
    return 0;
}