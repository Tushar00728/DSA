#include<iostream>
#include<climits>

using namespace std;

int BestStock(int arr[], int n)
{
    int max_profit = 0;
    int min_price = INT_MAX;

    for(int i =0; i<n; i++) {
        min_price = min(min_price, arr[i]);
        max_profit = max(max_profit, arr[i]-min_price);
    }
    return max_profit;
}


int main()
{

int prices[] = {7,1,5,3,6,4};

int n = sizeof(prices)/sizeof(prices[0]);

cout<<"Maximum profit: "<<BestStock(prices,n);

return 0;

}

