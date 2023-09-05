#include <stdc++.h>
using namespace std;

int print_no_of_step(int total)
{
    if (total<0)return 0;
    if (total == 1 || total ==0)return 1;
    return print_no_of_step(total-1) + print_no_of_step(total-2) + print_no_of_step(total-3);
}

int main()
{
    cout<<"Enter No.  ";
    int total ;
    cin>>total;
    cout<<print_no_of_step(total);
    return 0;
}