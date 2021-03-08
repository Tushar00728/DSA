#include<iostream>
#include<stdio.h>

using namespace std;

//function for array reverse 
void reverseArray(int arr[] , int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//printing array function
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

//Driver function
int main()
{
    int arr[] = {2,3,4,58,12,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);

    reverseArray(arr,0,n-1);
    cout<<"Reversed array is"<<endl;

    printArray(arr,n);

    return 0;   

}