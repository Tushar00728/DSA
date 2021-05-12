// Maximum and minimum of an array using minimum number of comparisons

#include<iostream>

using namespace std;

struct Comp
{
    int min;
    int max;
};

struct Comp MiniMaxi(int a[] , int n)

{ struct Comp minimax;

if (n==1)
{
    minimax.max = a[0];
    minimax.min = a[0];

    return minimax;
}

if(a[0]> a[1])
{
    minimax.max = a[0];
    minimax.min = a[1];
}

else
{
    minimax.max= a[1];
    minimax.min=a[0];
}

for(int i=2; i<n; i++)
{
    if(a[i] > minimax.max)
    minimax.max = a[i];
    else if(a[i]<minimax.min)
    minimax.min = a[i];
}

return minimax;
}

int main()
{
    int arr[] = {1222,423,23,45,55,666};
    int n = sizeof(arr)/sizeof(arr[0]);

    struct Comp minimax = MiniMaxi(arr, n);

    cout<< "Minimum element is " <<minimax.min <<endl;
    cout<< "Maximum element is " <<minimax.max<<endl;

    return 0; 
}
