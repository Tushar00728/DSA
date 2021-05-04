#include<algorithm>
#include<iostream>

using namespace std;

int MinDiff(int arr[], int n , int k)
{
    if(n==1)
    return 0;

    sort(arr,arr+n);

    int ans = arr[n-1]-arr[0];

    int small = arr[0]+k;
    int big = arr[n-1]-k;

    if (small>big)
        swap(small,big);

    for (int i=1;i<n-1;i++)
    {
        int sub = arr[i]-k;
        int add = arr[i]+k;
    

    if (sub>= small || add<=big)
    continue;


    if(big-sub <=add-small)
        small = sub;
    else    
        big=add;
}


return min(ans,big-small);
}

int main()
{
    int arr[] = {5,7};
    int n= (sizeof(arr)/sizeof(arr[0]));
    int k = 12;

    cout<< "Maximum difference:\n"<< MinDiff(arr,n,k);
    return 0;
}

