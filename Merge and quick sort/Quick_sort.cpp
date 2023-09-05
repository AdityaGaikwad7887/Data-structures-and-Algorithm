#include <stdc++.h>
using namespace std;

// partition algorithum for helping quick sort
int partition(int arr[] , int s , int e){
    int i = s;
    int pivot = arr[e]; // declearing pivot element (you can take any element as pivot element )
    for (int  j = s ; j <= e-1 ; j++)
    {
        if (arr[j]< pivot )
        {
           swap(arr[i],arr[j]);
           i++;
        }
    }
    swap(arr[e],arr[i]);
    return i;
}


// quick sort algorithum 
void quick_sort(int arr[] , int s , int e)
{
    if (s>=e)
    {
        return ;
    }

    int pi = partition(arr , s , e);
    quick_sort(arr , s , pi-1 );
    quick_sort(arr , pi+1 , e);
}

int main()
{
    int arr[] = {5,7,3,7,7,2,1};
    quick_sort(arr , 0 , 6);

    for (int  i = 0; i <= 6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}