#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    student const s1;
    cout<<s1.getage()<<endl; 
    // cout<<s1.getid()<<endl;  // we get error at this line 
    return 0;
}


//// NOte ////
/*
We can access only constant function for the constant objects 
*/