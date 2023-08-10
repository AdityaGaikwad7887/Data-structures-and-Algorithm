#include <stdc++.h>
using namespace std;

bool is_palindrome(vector<int> v , int s , int e){
    if (s>e){
        return true;
    }
    if ( v.at(s) == v.at(e)){
        return is_palindrome(v, s+1 , e-1);
    }
    else{
        return false;
    }
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
    if ( is_palindrome(v, 0 , a-1  ))
       cout<<"It is Palindrome"<<endl;
    else 
       cout<<"It is not palindrome"<<endl;
    return 0;
}