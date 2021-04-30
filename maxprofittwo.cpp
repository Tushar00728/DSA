#include<bits/stdc++.h>

using namespace std;


int getMaxProfit(int price[], int n)
{

    int* profit = new int[n]; //creating profit array
    for(int i=0;i<n;i++)
        profit[i] = 0; //array of zeros

    int max_price = price[n-1];
    for(int i =n-2; i>=0;i--) {
        if(price[i]> max_price)
            max_price = price[i]; //max price in array

            profit[i] = max(profit[i+1], max_price - price[i]);

    }

    int min_price = price[0];
    for(int i=1;i<n;i++) {
        if(price[i]<min_price)
            min_price = price[i];
        
        profit[i] = max(profit[i-1], profit[i]+ (price[i]-min_price)); //max profit for two transactions
    }

    int result = profit[n-1];

    delete[] profit; //avoiding memory leak

    return result;

}


int main()
{
    int price[] = {10, 22, 5, 75, 65, 80};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Max Profit after two transactions = " << getMaxProfit(price, n);
    return 0;
}
