#include<iostream>

using namespace std;

int MaxSumCont(int arr[], int n)
{
    int max_curr = arr[0], max_end = 0;
    for(int i = 0;i<n;i++) {
        max_end = max_end + arr[i];
        if(max_end<0)
            max_end=0;

        else if(max_curr<max_end) //Compare only when max_end>0
            max_curr = max_end;
    }
    return max_curr;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = MaxSumCont(arr, n);
    cout << "Maximum contiguous sum is " << sum;
    return 0;
}

