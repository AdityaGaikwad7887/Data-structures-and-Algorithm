#include <stdc++.h>
using namespace std;

/*
int linearsearch(vector<int> v, int key)
{
    int position;
    for (int i=0 ; i<v.size() ; i++)
    {
        if(v.at(i)==key)
        {
            cout<<"The key is found at index ";
            return i;
        }
        else continue;
    }
    cout<<"The key is not found"<<endl;
}

int main()
{
    vector<int> v;
    int n,x,key;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter Key : ";
    cin>>key;
    cout<<linearsearch(v , key)<<endl;
    return 0;
}
*/

int linearsearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "The key is found at index : ";
            return i;
        }
    }
    cout << "The key is not found ";
    return -1;
}

int main()
{
    int n, key;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Key : ";
    cin >> key;
    cout << linearsearch(a, n, key);
    return 0;
}