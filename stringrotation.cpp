#include<bits/stdc++.h>

using namespace std;

bool Rotation(string str1, string str2) {

    if(str1.length() != str2.length())
        return false;
    
    string temp = str1 + str1; //concatinating str1 to str1
    return(temp.find(str2) != string::npos);
}

int main()
{

    string str1 = "HELLO", str2 = "LLOHE";
    if(Rotation(str1,str2))
        cout<<"Strings are rotation of each other";
    else 
        cout<<"Strings are not rotations of each other";
    return 0;
}

