#include<iostream>
using namespace std;
void swap(int *a,int *b) //SWAPS the ADDRESSES
{
    int temp = *a;
    *a = *b; 
    *b = temp;
}
int main(int argc, const char** argv) {

    int arr[] = {23,123,8,1,4,22,45,22,34,8,1,4,22,45,22,34,3,4,43,4,43};
    int n=sizeof(arr) / sizeof(arr[0]);

    int i, j, min_idx;         for(i = 0;i < n-1; i++)
    {
        min_idx = i;             //Assume 1st elem smallest in 1 pass and next find it in other passes
                                 
        for(j = i+1; j < n; j++)    //from After Min_indx start loop
            if(arr[j] < arr[min_idx])  
                min_idx = j;             // Change Min_indx if new MIN found
            
        swap(&arr[min_idx],&arr[i]);     // Swap the found minimum element with the first element
        
    }

    for(i=0;i<n;i++)                            //print here
        cout<<arr[i]<<" ";
    


return 0;
}

/*
 working: The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.


arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 

 */