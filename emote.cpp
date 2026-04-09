#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{ long long n,m,k;
    cin>>n>>m>>k;
    vector<int>nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    long long m1=nums[n-1];
    long long m2=nums[n-2];
    long long possible_cycle=m/(k+1);
    long long remaining=m%(k+1);
    long long ans=possible_cycle*(m1*k+m2)+m1*remaining;
    cout<<ans<<endl;
    
  return 0;
}
