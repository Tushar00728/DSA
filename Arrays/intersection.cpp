#include<iostream>
#include<stdio.h>

using namespace std;

int Intersection(int arr1[], int arr2[], int n, int m)
{
    int i=0 , j =0;
    while(i<n && j<m) {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
            cout<< arr2[j]<< " ";
            i++;
            j++;
        }
    }
}

int main()

{
    int arr1[] = {1,2,3,4,6,7};
    int arr2[] = {2,5,8,9};


int n = sizeof(arr1)/sizeof(arr1[0]);
int m = sizeof(arr2)/sizeof(arr2[0]);

Intersection(arr1,arr2,n,m);

return 0;

}