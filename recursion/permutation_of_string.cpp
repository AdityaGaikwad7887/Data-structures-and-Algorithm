#include <stdc++.h>
using namespace std;

int print_permutation(char s[], int i = 0)
{
    if(s[i] == '\0'){
        cout<<s<<endl;
        return 0;
    }
    for (int j = i ; s[j] != '\0'; j++)
    {
        swap(s[i] , s[j]);
        print_permutation(s , i+1);
        swap(s[i] , s[j]);
    }
}

int main()
{
    // string s;
    // cin>>s;
    char s[] = "ABC";
    print_permutation(s);
    return 0;
}