#include <stdc++.h>
using namespace std;

void remove_char(char a[] , char z){
    if (a[0] == '\0'){
       return ;
    }
    if (a[0] != z){
        remove_char(a+1 , z);
    }
    else{
        for (int i = 0 ; a[i] != '\0' ; i++){
            a[i]=a[i+1];
        }
        remove_char(a+1,z);
    }

}

int main(){
    char a[100];
    cout<<"Enter array : ";
    cin>>a;
    cout<<"Enter which char is want to remove : ";
    char z;
    cin>>z;
    remove_char(a,z);
    for (int i = 0 ; a[i] != '\0' ; i++){
        cout<<a[i];
    }
    return 0;
}