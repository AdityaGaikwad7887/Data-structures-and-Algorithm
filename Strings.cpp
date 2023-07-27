#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    //Basicaly string is charactor array and we can do all operations of array on strings

    // // Static string decleration
    // string s1 ;
    // cin>>s1;
    // cout<<"The Entered string is : "<<s<<endl;

    // // Dynamic string decleration    -- In this str is pointer
    // string *str = new string;
    // cin>>(*str);
    // cout<<str<<endl;
    // cout<<(*str)<<endl;
    
    // String and Vector as 2D array

    // string s2= "Athrva"; 
    // vector<string>v;
    // v.push_back(s2);
    // for (int i=0; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<endl;
    //     sort(v[i].begin(),v[i].end());
    //     cout<<v[i]<<endl;
    // }
    
    string s3="Hello";
    string s4="Codding";
    string s5 = s3 + s4;
    // getline(cin,s3);
    // getline(cin,s4);
    cout<<s3+" "+s4<<endl;
    cout<<s5.substr(2)<<endl;; //Start printing the string from index 2
    cout<<s5.substr(2,2)<<endl; //Start printing from index 2 upto next 2 charactor
    
    cout<<s5.find("odd")<<endl; //This function will find the index from given input is started in string
    
    int x = 420;
    string s6 = to_string(x);  //This function convert integer input into string
    cout<<s6<<" "<<s6.size()<<" "<<s6.length()<<endl;
    s6.push_back('A');
    x = atoi(s6.c_str());
    cout<<x<<endl;
    cout<<s6<<endl;

    
    return 0;
}