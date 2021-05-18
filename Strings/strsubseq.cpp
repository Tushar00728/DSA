#include<bits/stdc++.h>

using namespace std;

void allSub(string t, int i, int n, string s) {


    if(i==n)
    {
        cout<<t<<endl; //base case
    }
    else {
        allSub(t,i+1,n,s);
        t=t+s[i]; //including current char 
        allSub(t,i+1,n,s);
    }
}

int main() {

    string s = "abc";
    allSub("", 0, s.length(), s);

    return 0;

}









