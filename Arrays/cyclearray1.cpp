# include <iostream>
using namespace std;
 
void cyrotate(int arr[], int n)
{
    int a = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = a;
}
 

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);
 
    cout << "Entered array \n";
    for (i = 0; i < n; i++)
        cout << arr[i];
 
    rotate(arr, n);
 
    cout << "\nRotating the array , we get\n";
    for (i = 0; i < n; i++)
        cout << arr[i];
 
    return 0;
}
 
