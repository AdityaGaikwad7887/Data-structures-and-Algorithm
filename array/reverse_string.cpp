#include <iostream>
using namespace std;

int lenth(char A[])
{
    int count =0,i=0;
    while(A[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

void reverse(char A[])
{
    int s=0;
    int e=lenth(A)-1;
    while (s<e)
    {
        swap(A[s],A[e]);
        s++;
        e--;
    }
    
}
int main()
{
    char A[6];
    char* ptr = A;
    cin.getline(A,6);
    reverse(A);
    cout<<"Your name is "<<A<<endl;
    return 0;
}

// int main()
// {
//     char A[7];
//     cin.getline(A,7);
//     swap(A[0],A[4]);
//     cout<<"Your name is "<<A<<endl;
//     return 0;
// }