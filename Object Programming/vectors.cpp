#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> V;                       // static initiallision of vector
    vector<int> *vp = new vector<int>(); // Dynamic initiallision of vector  (we have to delete it manually)

    // V.push_back(10);     //this line makes the vector of size 2 , and as we add an element then size of vector is doubled
    // V.push_back(20);     //push_back function adds an element at the end of the vector
    // V.push_back(30);
    // V[3] = 50;   // invalide syntax (when we add an element as like thiss then size of vector not increased)
    // V.push_back(40);
    // cout<<V[0]<<endl;
    // cout<<V[1]<<endl;
    // cout<<V.at(2)<<endl;
    // cout<<V[3]<<endl;
    // cout<<V[4]<<endl;   // garbeage value
    // //cout<<V.at(8)<<endl;   //this line throws an error because its outof range // V.at function is checks where index is valide of not
    // cout<<endl<<endl;

    // V.pop_back();  //pop_back function deletes the last element of vector

    // // This is also correct approch to print a vector
    // for(int i=0 ; i<V.size(); i++)
    // {
    //     cout<<V[i]<<endl;
    // }

    for(int i=0 ; i<100 ; i++)
    {
        V.push_back(i+1);
        // cout<<V.size()<<endl;     // size shows how many elements are in vectors 
        // cout<<V.capacity()<<endl; // capacity shows how many elements we can add in vector 
    }
    cout<<endl<<endl<<endl<<endl;
    for(int i=0 ;i<V.size() ; i++)
    {
        cout<<V[i]<<endl;
    }

    // we can change element in vector as like as array

    vector<int> v2(10,-2);  // we initiallize the vector of size 10 with all elements -2
    v2.at(3) = 4;  // here we changed the element at index 3
    for(int i=0 ; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<endl;
    }
    return 0;
}