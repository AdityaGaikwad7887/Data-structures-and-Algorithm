#include <iostream>
using namespace std;

int main()
{
    int B[10];
    for (int i=0 ; i<10 ; i++)
    {
        B[i]=i*i;
        cout<<B[i]<<" ";
    }

    cout<<endl<<B[5]<<" "<<B[10]<<endl;

    int A[3] = {2,3,4};
    cout<<endl<<"The size of array A is "<<sizeof(A)<<endl;
    return 0;
}