#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    int age;

public:

    char *name;
    Student(int age, char *name)
    {
        this->age = age;
        // this->name = name;  // shallow copy 

        this->name = new char[strlen(name)+1]; 
        strcpy(this->name,name);
        // deep copy                 -- we are creating the new array and copying the old array into it

    }
    Student (){}
    Student (Student const &s)
    {
        this->age = s.age;
        // this->name = s.name; // shallow copy in code of inbuild copy constructor

        this->name = new char(strlen(s.name)+1);
        strcpy(this->name,s.name);
        // making the deep copy
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};

int main()
{
    char name[] = "abcd";   
    Student s1(20,name);
    s1.display();

    s1.name[0]='X';
    // Student s2(s1);  //inbuild copy constructor
    Student s2(s1);
    s2.display();
    s1.display();        
}

//// Note that ////
/*
inbuild copy constructor alwas make the shallow copy  
- To avoid shallow copy we should always make our own copy constructor 
when memory is alloted dynamically
*/
