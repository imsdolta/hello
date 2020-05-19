//idea : swap an elem until it finds its exact position
#include<iostream>
using namespace std;
 int main(int argc, const char** argv)
{
     
    int arr[] = {4,2,3,54,6,2,24};
    int n=sizeof(arr) / sizeof(arr[0]);

    int i, j, key;
    for(i = 1;i < n; i++)
    {                                   //j = 0   key 4
        key = arr[i];
        j = i - 1;
        /* Move elements of arr[0..i-1], that are  gre ater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key)       // (if sec elem > first elem)
        {
            arr[j + 1] = arr[j];                // 2nd elem goes to 1st elem place
            j = j - 1;  
        }
        arr[j + 1] = key;                       // 1st  elem goes to 2nd elem place
    }

    for(i=0;i<n;i++)                            //print here
        cout<<arr[i]<<" ";

    return 0;
}
