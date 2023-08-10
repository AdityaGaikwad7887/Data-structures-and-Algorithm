#include <stdc++.h>
using namespace std;

int lastIndex(vector<int> nums , int n , int x , int i )
{
    if (i==n){
        return -1;
    }
    int lastInd = lastIndex(nums , n , x , i+1);
    if (lastInd== -1){
        if(nums[i]==x)
        {
            return i;
        }
        else{
            return -1;
        }
    }
    else {
        return lastInd;
    }
    return lastInd;
}

int main()
{
    vector<int> v;
    int a,x;
    cin>>a;
    for (int i = 0 ; i< a ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter number : ";
    cin>>x;
    cout<<lastIndex(v,v.size(),x,0);
    return 0;
}