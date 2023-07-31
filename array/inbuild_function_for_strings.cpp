#include <iostream>
#include <string.h>
using namespace std;

//String should be as like char A[n] or string A;

bool mystrcmp(char str1[], char str2[])
{
    if(strlen(str1) != strlen(str2))
    return false;
    for (int i=0 ; str1[i] != '\0' ; i++)
    {
        if(str1[i] != str2[i])
        return false;
    }
    return true;
}

int main()
{
    char A[100];
    char B[100];
    cin.getline(A,100);
    cin.getline(B,100);

 /******strlen******/
    //cout<<"length : "<<strlen(A)<<endl;

 /******strcmp******/
    // if (strcmp(A,B) == 0)
    // {
    //     cout<<"Equal strings"<<endl;
    // }
    // else
    // {
    //     cout<<"strings are not Equal"<<endl;
    // }
    // if (mystrcmp(A,B))
    // {
    //     cout<<"Equal strings"<<endl;
    // }
    // else
    // {
    //     cout<<"strings are not Equal"<<endl;
    // }
    
 /******strcpy******/
    // strcpy(B,A);
    // cout<<"Your name is : "<<B<<endl;
    

 /******strncpy******/
//  // strncpy doesn't copy the null charector as default but copy at the end of source string
//     strncpy(B,A,3);
//     cout<<"After strncpy string B is "<<B<<endl;
 /******strcat*******/
    // strcat(A,B);
    // cout<<"After the strcat string will be : "<<A<<endl;

    return 0;
}