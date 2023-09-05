#include <stdc++.h>
using namespace std;

// void ok(int i = 0){
//     cout<<i<<endl;
//     ok(i+1);
// }

int main(){
    // ok(0);
    int k = 2;
    string s = "Aditya";
    string a = s.substr(k,s.length()-k);
    cout<<a<<endl;
    return 0;
}