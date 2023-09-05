#include <stdc++.h>
using namespace std;

void print_subs(string input , string output, vector<string> &temp){
    // Base case 
    vector<string> ans;
    if(input.length() == 0){
        temp.push_back(output);      
        return;
    }

    // recursive case
    print_subs(input.substr(1) , output , temp);
    print_subs(input.substr(1) , output + input[0] , temp);
}

// void print_subs2(char input[] , char output[]){
//     // Base case 
//     vector<string> ans;
//     if(input[0] == '\0'){
//         cout<<output<<endl;       
//         return;
//     }

//     // recursive case
//     print_subs(input + 1 , output);
//     print_subs(input + 1 , output + input[0]);
    
// }

int main(){
    cout<<"Enter String"<<endl;
    string input,output = "";
    cin>>input;

    vector<string> temp;
    print_subs(input,output,temp);

    cout<<"OK"<<endl;
    for (int i = 0; i < temp.size() ; i++)
    {
        cout<<temp.at(i)<<endl;
    }
    
    return 0;
}