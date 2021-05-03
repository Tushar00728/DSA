#include<bits/stdc++.h>

using namespace std;

bool tripletSum(int arr[], int n, int sum)
{
    int next,last;

    sort(arr,arr+n);

    for(int i = 0; i<n-2; i++) {
        
        next = i+1;
        last = n-1;

        while(next<last) {
            if(arr[i]+arr[next]+arr[last] == sum) {
                cout<<"Triplet for the given sum is "<<arr[i]<<", "<<arr[next]<<", "<<arr[last];
                return true;
            }
            else if (arr[i]+arr[next]+arr[last]< sum)
                next++;
            else
                last--;

    

        }




    }


    return false;



}

int main() {
    int arr[] = {1,4,45,6,10,8};
    int sum =22;
    int n = sizeof(arr)/sizeof(arr[0]);

    tripletSum(arr,n,sum);

    return 0;
}