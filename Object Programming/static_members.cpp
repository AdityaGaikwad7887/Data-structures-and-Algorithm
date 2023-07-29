#include <iostream>

using namespace std;

class student 
{
    int roll;
    int age;
    public:
    static int TS;
    student()
    {
        TS++;
    }
    student(int roll){
        this->roll = roll;
    }
    void setdata(int roll, int age)
    {
        this->roll= roll;
        this->age= age;
        cout<<this->roll<<" "<<this->age<<endl;
    }
    static int getTS()
    {
        return TS;
    }
};

int student::TS = 0; // we always initialize static data member


int main()
{
    student s1,s2,s3,s4,s5(4);
    s1.setdata(1,14);
    s2.setdata(2,12);
    s3.setdata(3,13);
    cout<<student::TS<<endl;
    cout<<student::getTS()<<endl;
    return 0;
}



//// Note ////
/*
- static members always initialize outside the class 
- static property can't be copy
- by default all data members and functions are non static
- static functions can only access static data members and can call only static function
- we can use this key word for static functions

*/