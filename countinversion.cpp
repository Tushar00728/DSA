#include<iostream>
#include<algorithm>

using namespace std;

int CountInv(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                count++;
 
    return count;
}
 
// Driver Code
int main()
{
    int arr[] = { 4, 12, 9, 3, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " The number of inversions in the given array are: "
         << CountInv(arr, n);
    return 0;
}
 