#include<iostream>


using namespace std;

int GetPairCount(int arr[], int n, int sum)
{
    int cnt = 0;

    for (int i = 0; i<n; i++)
        for(int j=i+1;j<n;j++)
        
            if(arr[i]+arr[j]==sum)
                cnt++;
    return cnt;
        

}

int main()
{
    int arr[] = {1,5,7,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;

    cout<<"Number of pairs:"<<GetPairCount(arr,n,sum);
    return 0;
}

