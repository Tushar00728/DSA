#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size) {
   for (int j = 0; j < size; j++)
   cout << arr[j] << " ";
 
   cout << endl;
}
 

void next_Permutation(int arr[], int n)
{   
    int i,k;
    
    for(i = n-2; i>=0; i--) {
        if(arr[i]<arr[i+1]) //step1 
            break;
    }

    if(i<0) {
        reverse(arr,arr+n);
    }

    else {
        for(k= n-1; k>i; k--) {
            if(arr[k]>arr[i]) {
                break;
            }
        }
        swap(arr[i],arr[k]);
        reverse(arr+i+1,arr+n);
        
    }


}


int main()
{
    int arr[] = {1,3,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    next_Permutation(arr,n);
    printArray(arr,n);

    return 0;

}