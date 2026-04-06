#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void operation(){
    long long n;
        cin>>n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }
        if (nums.size()==1)
        {
            cout<<0<<endl;
            return;
        }
        int maxdiff=nums[n-1]-nums[0];
        for (int i = 0; i < n-1; i++)
        {
            maxdiff=max(maxdiff,nums[n-1]-nums[i]);
        }
        
        for (int i = 1; i < n; i++)
        {
            maxdiff=max(maxdiff,nums[i]-nums[0]);
        }
        for (int i = 0; i < n - 1; i++) {
        maxdiff = max(maxdiff, nums[i] - nums[i + 1]);
    }
    cout<<maxdiff<<endl;
}
   
int main() 

{ long long t;
    cin>>t;
    while (t--)
    {
        operation();
    }
    
  return 0;
}