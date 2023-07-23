#include <iostream>
using namespace std;

void printallprefix(char A[])
{
    for (int e=0; A[e] != '\0'; e++)
    {
        for  (int s=0; s<=e; s++)
        {
            cout<<A[s];
        }
        cout<<endl;
    }
}

int main()
{
    char A[100];
    cin.getline(A,100);
    printallprefix(A);
    return 0;
}