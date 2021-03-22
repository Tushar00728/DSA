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
    int i, count0 = 0, count1 = 0, count2 = 0; 
  
    // Counting the number of 0s, 1s and 2s in the array 
    for (i = 0; i < n; i++) { 
        switch (arr[i]) { 
        case 0: 
            count0++; 
            break; 
        case 1: 
            count1++; 
            break; 
        case 2: 
            count2++; 
            break; 
        } 
    } 
  
    // Update the array 
    i = 0; 
  
    // Store all the 0s in the beginning 
    while (count0 > 0) { 
        arr[i++] = 0; 
        count0--; 
    } 
  
    // store 1s 
    while (count1 > 0) { 
        arr[i++] = 1; 
        count1--; 
    } 
  
    // store 2s 
    while (count2 > 0) { 
        arr[i++] = 2; 
        count2--; 
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
