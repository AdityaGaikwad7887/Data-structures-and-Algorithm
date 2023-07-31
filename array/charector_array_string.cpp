#include <iostream>
using namespace std;
// int lenth(char A[])
// {
//     int count =0,i=0;
//     while(A[i] != '\0')
//     {
//         i++;
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char A[4];
//     cin>>A;   // we can't give 'Hello_world' as input 
//            
//     for (int i=0 ; i<4 ; i++)
//     {
//         cout<<A[i]<<" ";
//     }
//     cout<<endl<<lenth(A)<<endl;
//     return 0;
// }

int main()
{
    // last one cell in the char array is alway reserved for null charector
    char A[10];
    //cin.getline(A,10);  // we can give 'Hello_world' as input
    //cout<<"Your name is "<<A<<endl;

    // cin.getline haves three parameters
    // cin.getline(string name , lenth , deline char)
    
    cin.getline(A,10,'t');
    cout<<"Your name is "<<A<<endl;
}