#include<iostream>
using namespace std;
void swap(int *a,int *b) //SWAPS the ADDRESSES
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(int argc, const char** argv) {

    int arr[]={8,1,4,22,45,22,34,3,4,43};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i,j;
    for(i = 0;i < n-1; i++)                  //loop till Sec Last Elem coz that matches up in pairs
    {                          
        for(j = 0;j <n-i-1; j++)            //loop all elem except sorted[beg elems]
        {                     
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);        //SWAP if not sorted
        }                                           //repeat until all done
    }

    for(i=0;i<n;i++)                            //print here
        cout<<arr[i]<<" ";                      //OUTPUT : 1 3 4 4 8 22 22 34 43 45 

return 0;
}
