#include<bits/stdc++.h>

using namespace std;

void validShuffle(string str1, string str2, string res) {
    int l1 = str1.length();
    int l2 = str2.length();
    int lr = res.length();

    if((l1+l2) != lr) 
        cout<< "Not a valid shuffle";
    
    else {
        int f = 0; //flag
        int i = 0, j=0, k = 0;
        
        while(k<lr) {
            
            if(i<l1 and str1[i]==res[k]) 
                i++;
            else if(j<l2 and str2[j]==res[k])
                j++;
            else {
                f = 1;
                break;
            } 

            k++;

        }

        if(i<l1 or j< l2) 
            cout<<"Not a valid shuffle";
        else
            cout<<"Valid shuffle";


    }
}


int main() {

    string str1 = "xy";
    string str2 = "21";
    string res = "x2y1";

    validShuffle(str1,str2,res);

    return 0;
}










