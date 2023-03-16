#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,a,x;
vector<int> nums;
cin >> n;
for (a = 0; a < n;a++)
{
    cin >> x;
    nums.push_back(x);
}
int i,j,k,m,c=0;
for(i=0;i<nums.size();i++)
        {
            if(nums[i]<nums[i+1])
            {
              j=i;
              c++;
              continue;
            }
        }
        if (c==0)
        {
           reverse(nums.begin(),nums.end());
           for(auto it:nums)
        {
            cout << it<<" ";
        }
        return 0;
         }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[j])
            {
              m=i;
              continue;
            }
        }
        cout << j << " " << m;
        swap(nums[j],nums[m]);
        reverse(nums.begin()+j+1,nums.end());

        for(auto it:nums)
        {
            cout << it<<" ";
        }







}
