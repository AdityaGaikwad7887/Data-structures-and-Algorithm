#include <stdc++.h>
using namespace std;

bool checking_decrease(vector<int> &nums , int n )
{
    if(n == 0 || n == 1)
    {
        return true;
    }
    if (nums.at(n-1) > nums.at(n-2))
    {
        return false;
    }    
    return checking_decrease(nums , n -1 );
}

bool  checking_increase(vector<int> &nums , int n )
{
    if (n == 0 || n == 1)
    {
        return true;  
    }
    if (nums.at(n-1) < nums.at(n-2))
    {
        return false;
    }
    return checking_increase(nums , n-1 );
       
}

int main()
{
    vector<int> v;
    int a,x;
    cin>>a;
    for (int i = 0; i < a ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    if (checking_increase(v , v.size() ) || checking_decrease(v , v.size()))
    {
        cout<<"Sorted dynamic array"<<endl;
    }
    else 
    {
        cout<<"Not sorted dynamic array"<<endl;
    }
    
    return 0;
}