//Program to find Kth smallest and largest element in array

#include<iostream>
#include<algorithm>

using namespace std;

int KthSmallest(int arr[], int n, int k)
{
    sort(arr,arr+n); //sort(arr, arr + n, greater<int>()); reverse sorting for largest element 


    return arr[k-1];  //Return Kth smallest element in a given array 

}

int main() 
{
    int arr[] = {1213,233,2,44,55,677,22};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int k =1; //2 is the smallest 

    cout<<"Kth smallest element in the array \n"<<KthSmallest(arr,n,k);
    return 0;
}
