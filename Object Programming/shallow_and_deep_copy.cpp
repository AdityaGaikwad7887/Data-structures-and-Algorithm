#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // this->name = name;  // shallow copy 

        this->name = new char[strlen(name)+1]; 
        strcpy(this->name,name);
        // deep copy                 -- we are creating the new array and copying the old array into it

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

    name[3] = 'e';
    Student s2(30,name);
    s2.display();

    s1.display();        
}

//// Note ////
/*
At line 23 we create char array name dynamically 
at line 24 s1 object is create and display function is invocked
so as we know that char start from index of its frist element and ends with null char 
at line 25 char array name is "abcd"  but when we add the name[3] = 'e' then
char array name is changed to "abce" and for s1 display function called at line 31 name is "abce"
----- This all above is because we copying an address of only first element the array (shallow copy ) -----


-> shallow copy is copy the first address of array ;
-> deep copy is copy the entire array ;

*/