#include<iostream>
#include<stdio.h>

using namespace std;

int Union(int arr1[], int arr2[], int n, int m)
{
    int i= 0 , j= 0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        cout<<arr1[i++]<< " ";
        else if (arr2[j]<arr1[i])
        cout<<arr2[j++]<< " ";
        else {
            cout<< arr2[j++]<<" ";
            i++;
            }
    }

    while (i<n)
        cout<< arr1[i++]<<" ";
        
    while(j<m)
        cout<<arr2[j++] << " ";

}

int main()

{
    int arr1[] = {1,2,3,4,6,7};
    int arr2[] = {2,5,8,9};


int n = sizeof(arr1)/sizeof(arr1[0]);
int m = sizeof(arr2)/sizeof(arr2[0]);

Union(arr1,arr2,n,m);

return 0;

}