#include <stdc++.h>
using namespace std;

// This recursion has 1,2,3,4 -> 2,3,4 -> 3,4 -> 4 approch
double sum(double a [] , int n)
{
    if(n == 0)
    {
        return 0;
    }

    return a[0] + sum(a+1 , n-1 );
}


// This recursion has 1,2,3,4 -> 1,2,3 -> 1,2 -> 1 approch
double sum2(vector<double> &nums, int n)
{
    if (n == 1)
    {
        return nums.at(0);
    }

    return sum2(nums, n - 1) + nums.at(n - 1);
}

//This recursion has approch at give complete array but add only specific element 
double sum3(vector<double> &nums , int n , int i)
{
    if (i == nums.size())
    {
        return 0;
    }

    return sum3(nums , n , i+1 /*(i++ not used because it passes value of as 0 and after increases */ ) + nums.at(i);
                               /*(++i not used because it gose out of range of vector )*/
}

int main()
{
    
    vector<double> v;
    int a, x;

    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
    double array[a];
    for (int i = 0; i < v.size() ; i++)
    {
        array[i] = v.at(i);
    }
    
    cout << sum2(v, v.size()) << endl;
    cout << sum(array , v.size() ) << endl;
    cout << sum3(v , v.size() , 0 ) << endl;

    return 0;
}