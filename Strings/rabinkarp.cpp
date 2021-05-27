#include<bits/stdc++.h>

using namespace std;

#define d 256 //256 number of characters in the input alphabet

void rabin_search(char pat[], char txt[], int q)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int i,j;
    int p = 0; //hash value of pattern
    int t= 0; //hash value of text
    int h= 1;

    for(i =0; i<m-1;i++)
        h = (h*d) %q; //q is a prime number
    
    for(i=0; i<m;i++) {
        p = (d*p+pat[i]) %q;
        t = (d*t+ txt[i]) %q;
    }
    
    for( i=0; i<=n-m;i++) {
        if(p==t) {               //If the hash values match then only check for characters on by one 
            for(j=0;j<m;j++)
            {
                if(txt[i+j] != pat[j])
                break;
            }

            if(j==m)
                cout<<"Pattern found at index"<<i<<endl;

        }

        if(i<n-m) {
            t= (d*(t-txt[h]*)) + txt[i+m]) %q; //remove leading digit and add trailing digit 
                if(t<0) //converting t to positive if we get a negative value of t
                    t=(t+q);
        }
    }

}

int main() 
{ 
    char txt[] = "ABSDASDBQAGHBA"; 
    char pat[] = "GHB";
        
      // A prime number 
    int q = 101; 
      
      
      rabin_search(pat, txt, q); 
    return 0; 
} 