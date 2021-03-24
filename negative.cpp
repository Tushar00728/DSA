#include<iostream>
#include<algorithm>

using namespace std;

void sort(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = { -11, -2, -3, 454 ,3, 2, -22, 34, 44 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    printArr(arr, n);
    return 0;
}