#include<iostream>
#include<climits>

using namespace std;

int Kadane(int arr[], int size) 
{
    int max_so_far = INT_MIN, max_end_here = 0;

    for(int i = 0; i<size; i++)
    {
        max_end_here = max_end_here + arr[i];
        if (max_so_far< max_end_here)
            max_so_far = max_end_here;

        if(max_end_here < 0)
            max_end_here = 0;
    }

    return max_so_far;
}


int main() //driver program
{
    int arr[] = {-2,-4,5,-3,1,2,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cont_sum = Kadane(arr,n);

    cout<< "Maximum contigous sum using Kadane's Algo is " << cont_sum;
    return 0;

}