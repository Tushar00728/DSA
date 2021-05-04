#include<bits/stdc++.h>

using namespace std;

void reverseString(string& str) { 

    int str_size = str.length();
    string x = "Hello There";

    for (int i = 0; i< str_size/2; i++)
        swap(str[i], str[str_size-i-1]);
}

int main()

{

    string x = "Hellothere";
    reverseString(x);
    cout<< x;
    return 0;
}