#include <bits/stdc++.h>
using namespace std;

void isSubset(int arr1[], int arr2[], int m , int n) {

    unordered_set<int> sub;
    for(int i=0; i<m; i++)  {
        sub.insert(arr1[i]);

    }

    int set_size = sub.size();  //setting the set size 
    
    for(int j=0;j<n;j++) {
        sub.insert(arr2[j]);

    }

    if(sub.size()== set_size) {    //if the size of set does not change then arr2 is subsete of arr1
        cout<<"Array 2 is a subset of array 1"<<endl;
    }
    else {

        cout<<"Array 2 is not a subset of array 1"<<endl;
    }


    
}
 
int main()
{
   
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 8 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    isSubset(arr1,arr2,m,n);

    return 0;
}
