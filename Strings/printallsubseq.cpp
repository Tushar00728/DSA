#include<bits/stdc++.h>

using namespace std;

void print_Allsub(string input, string output) {

    if(input.length()==0) {
        cout<<output<<endl;

        return ;
    }

    print_Allsub(input.substr(1), output);
    print_Allsub(input.substr(1), output + input[0]);


}

int main() {
    string input = "abc";
    string output = "";
    print_Allsub(input,output);

    return 0;
}