// Introduction and solution megre sort 



#include <stdc++.h>
using namespace std;

void merge_arr(int a[] , int b[] , int arr[] , int s , int e){
    int mid = (s+e)/2;
    int i = s , k = s;
    int j = mid+1;
    while (i <= mid && j <= e)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while ( i <= mid)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while ( j <= e)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    
}

void merge_sort(int arr[] , int s , int e)
{
    if (s >= e)
    {
        return ;
    }
    int mid = (s+e)/2;
    int x[100] , y[100];
    for(int i = 0 ; i <= mid ; i++)
    {
        x[i] = arr[i];
    }
    for(int i = mid+1 ; i <=e ; i++)
    {
        y[i] = arr[i];
    }
    merge_sort(x , s , mid);
    merge_sort(y , mid+1 , e);
    merge_arr(x , y , arr , s , e );
    
}

int main()
{
    int arr[] = {7,4,5,1,3,2};
    merge_sort(arr , 0 , 5);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// Note :
/*
By default arrays are passed by reference.
*/