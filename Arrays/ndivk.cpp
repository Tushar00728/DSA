#include<bits/stdc++.h>

using namespace std;

void NdivK(int arr[] , int n, int k)
{
    int th = n / k;

    unordered_map<int, int> freq;

    for(int i=0; i<n;i++)
    {
        freq[arr[i]]++;
    }

    for(auto i: freq)
    {
        if(i.second>th)
        {

        cout<< i.first<<endl;
        }
    }
}

int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5, 
                  4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
      
    NdivK(arr, n, k);
}