#include <bits/stdc++.h> 
using namespace std; 
  
//print the contents of an array 
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Function to sort the array of 0s, 1s and 2s 
void sortArr(int arr[], int n) 
{ 
    int i, c0 = 0, c1 = 0, c2 = 0; 
  
    // Counting the number of 0s, 1s and 2s in the array 
    for (i = 0; i < n; i++) { 
        switch (arr[i]) { 
        case 0: 
            c0++; 
            break; 
        case 1: 
            c1++; 
            break; 
        case 2: 
            c2++; 
            break; 
        } 
    } 
  
    // Update the array 
    i = 0; 
  
    // Store all the 0s in the beginning 
    while (c0 > 0) { 
        arr[i++] = 0; 
        c0--; 
    } 
  
    // store 1s 
    while (c1 > 0) { 
        arr[i++] = 1; 
        c1--; 
    } 
  
    // store 2s 
    while (c2 > 0) { 
        arr[i++] = 2; 
        c2--; 
    } 
  
    
    printArr(arr, n); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(int); 
  
    sortArr(arr, n); 
  
    return 0; 
} 