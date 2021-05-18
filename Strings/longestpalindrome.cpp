#include <bits/stdc++.h>
using namespace std;
 
// A function to print a substring
void printStr(char* str, int low, int high)
{
    for (int i = low; i <= high; i++)
        cout << str[i];
}
 
// This function prints the longest palindrome substring It also returns the
// length of the longest palindrome
int longestPalindromeStr(char* str)
{
    
    int end = 1;
 
    int start = 0;
    int len = strlen(str);
 
    int low, high;
 
    // One by one consider every
    // character as center point of
    // even length palindromes
    for (int i = 1; i < len; ++i) {
        // Find the longest even length palindrome
        // with center points as i-1 and i.
        low = i - 1;
        high = i;
        while (low >= 0 && high < len
               && str[low] == str[high]) {
            if (high - low + 1 > end) {
                start = low;
                end = high - low + 1;
            }
            --low;
            ++high;
        }
 
        // Find the longest odd length
        // palindrome with center point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len
               && str[low] == str[high]) {
            if (high - low + 1 > end) {
                start = low;
                end = high - low + 1;
            }
            --low;
            ++high;
        }
    }
 
    cout << "Longest palindrome substring is: ";
    printStr(str, start, start + end - 1);
 
    return end;
}
 
int main()
{
    char str[] = "abba";
    cout << "\nLength of substring is: "
         << longestPalindromeStr(str)
         << endl;
    return 0;
}
 