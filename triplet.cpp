#include<bits/stdc++.h>

using namespace std;

bool tripletSum(int arr[], int n, int sum)
{
    int next,last;

    sort(arr,arr+n);  //sorting the array

    for(int i = 0; i<n-2; i++) {        // i will go from 0 till the second last element 
        
        next = i+1; //next to ith element
        last = n-1; //last element

        while(next<last) {
            if(arr[i]+arr[next]+arr[last] == sum) {         //if triplet found
                cout<<"Triplet for the given sum is "<<arr[i]<<", "<<arr[next]<<", "<<arr[last];
                return true;
            }
            else if (arr[i]+arr[next]+arr[last]< sum)
                next++;           //increase next if triplet sum is less than sum
            else
                last--;           // decrease last is triplet sum larger than sum

    

        }




    }

    cout<<"No triplet found";
    return false;



}

int main() {
    int arr[] = {1,4,45,6,10,8};
    int sum = 11;
    int n = sizeof(arr)/sizeof(arr[0]);

    tripletSum(arr,n,sum);

    return 0;
}
