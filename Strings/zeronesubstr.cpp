#include <bits/stdc++.h>
using namespace std;
  

int zero_One(string str, int n)
{
  
 
    int count_zero = 0, count_one = 0;
  
    
    int count_sub = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            count_zero++;
        }
        else {
            count_one++;
        }
        if (count_zero == count_one) {
            count_sub++;
        }
    }
  
    
    if (count_zero != count_one) {
        return -1;
    }
  
    return count_sub;
}
  

int main()
{
    string str = "0011";
    int n = str.length();
  
    cout << zero_One(str, n);
  
    return 0;
}