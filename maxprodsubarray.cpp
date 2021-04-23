#include<bits/stdc++.h>

using namespace std;

int maxProduct(int arr[], int n) { 

    int maxi = arr[0];
    int mini = arr[0];
    int product = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<0)
            swap(mini,maxi);

            maxi = max(arr[i],maxi*arr[i]);
            mini = min(arr[i], mini*arr[i]);

            if(maxi>product)
                product = maxi;
    }

    return product;



}

int main()

{

    int arr[] = {6,-3,-10,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxpro = maxProduct(arr,n);

    cout<< "Max Product of subarray is\n"<<maxpro;
    return 0;
}


