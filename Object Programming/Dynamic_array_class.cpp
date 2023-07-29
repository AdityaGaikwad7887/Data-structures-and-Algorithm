#include <iostream>

using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[10];
        nextIndex = 0;
        capacity = 10;
    }
    DynamicArray(int capacity)
    {
        this->capacity = capacity;
        data = new int[capacity];
        nextIndex = 0;

    }
    DynamicArray (DynamicArray const &D)
    {
        this->nextIndex = D.nextIndex;
        this->capacity = D.capacity;
        /// shallow copy this->data = D.data;
        /// deep copy --
        this->data = new int[D.capacity];
        for (int i = 0; i < capacity ; i++)
        {
            this->data[i] = D.data[i];
        }
        
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[capacity + 2];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = capacity + 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
    }

    int getelement(int index)
    {
        if (index >= 0 && index <= nextIndex)
        {
            return data[index];
        }
        else
        {
            return -1;
        }
    }
    void print()
    {
        for (int i = 0; i < nextIndex ; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
        
    }
    int getcapacity()
    {
        return capacity;
    }


    // void operator =(DynamicArray const &D)
    // {
    //     this->nextIndex = D.nextIndex;
    //     this->capacity = D.capacity;
    //     /// shallow copy this->data = D.data;
    //     /// deep copy --
    //     this->data = new int[D.capacity];
    //     for (int i = 0; i < capacity ; i++)
    //     {
    //         this->data[i] = D.data[i];
    //     }
    // }
};

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    cout<<endl<<d1.getelement(2)<<endl; // getelement function invocked 
    cout<<endl<<d1.getelement(17)<<endl;
    d1.print();
    cout<<d1.getcapacity()<<endl;  // getcapcity function invocked

    DynamicArray d2(d1);    /// copy constructor
    DynamicArray d3;        /// our default constructor
    d3 = d1;                /// copy aasignment operator
    
    d1.add(100,0);
    d1.print();  //print function invocked
    d2.print();
    d3.print();

    cout<<endl<<endl;

    // Array created as per user requirment
    DynamicArray d5(100);
    cout<<d5.getcapacity();

    return 0;
}



//// Note ////
/*
changes in D1 also reflects in D2 because
- copy assignment operator makes a shallow  copy 
*/