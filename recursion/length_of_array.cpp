#include <stdc++.h>
using namespace std;

int lengths(char a[] ){
    if (a[0] == '\0'){
       return 0;
    }
    int temp = lengths(a+1);
    return temp+1;
}

int main(){

    char a[100];
    cin>>a;
    cout<<lengths(a);
    return 0;

}