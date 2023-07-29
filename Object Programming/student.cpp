#include <iostream>
using namespace std;
class  student{
    int age = 10;
    int id = 2221;
    //const int rollnumber;
    //int &x;
    
    public:
    // student(int r,int age) : rollnumber(r) , x(this->age) , age(age) we give the value for the const as like this */
    // {
    //     //rollnumber = r; at this line we get an error because memory for rollnumber allready alloted
    // }
    
    student(){}
    int getage() const
    {
        return age;
    }
    int getid()
    {
        return id;
    }
     
};

//// Note ////
// always initiallse the constants at the time of creation