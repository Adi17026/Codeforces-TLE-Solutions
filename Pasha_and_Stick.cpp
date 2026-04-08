#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    if (n%2!=0)
    {
       cout<<0<<endl;
        return 0;
    }
    long long half=n/2;
     long long m=(half-1)/2;
  
    cout<<m<<endl;
    
    return 0;
}