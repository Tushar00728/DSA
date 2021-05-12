#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int s = 0;
    int f = 0;
    
    unordered_map<int,int> m;
    for(int i =1;i<=n;i++) {
        s = s + a[i];
        if(s==0 || m[s] || a[i]==0) {       //prefix sum is zero or element gets repeated or 0 is in array
            f=1;
            break;
        }
        else {
            m[s]=1;
        }

    }
    if(f==1) cout<<"Yes\n";
    else cout<<"No\n";

return 0;
}


