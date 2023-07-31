#include <iostream>
using namespace std;

int main()
{
  //Giveing the row is not mendetory but cloum is 
  //because in the system 2d array is stored as the 1d array with indexing 
  //3*3 array will be as {1,2,3,4,5,6,7,8,9} and cell number in 1d system array is given by 
  //{ a[i][j] = i*cloum + j } so we seen that the cloum is used for claculating the cell number
    int A[][3] = {{1},{0,6},{7,0,9}};

    for (int i=0 ; i<3 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}