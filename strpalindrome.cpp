#include<bits/stdc++.h>

using namespace std;

void checkPalindrome(char x[])
{

    int i = 0;
    int j = strlen(x)-1;
    
    while(j>i)
    {
        if(x[i++] != x[j--] )
        {
            cout<<"Not a palindrome"<<endl;
            return ;
        }


    }

    cout<<"Given string is a palindrome";
}


int main()
{

   checkPalindrome("abba");
   return 0;
}
