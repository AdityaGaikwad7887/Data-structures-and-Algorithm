#include <iostream>
using namespace std;

int main()
{
    int A[2][3];
    
/*  way to input the data
    cin>>A[0][0]
       >>A[0][1]
       >>A[0][2]
       >>A[1][0]
       >>A[1][1]
       >>A[1][2];
*/

    for (int i=0 ; i<2 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>A[i][j];
        }
    }   
   
/*
    for (int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<3 ; j++)

        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    
    return 0;
}