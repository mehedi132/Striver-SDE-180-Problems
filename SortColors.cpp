#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n1,a,x;
vector<int> nums;
cin >> n1;
for (a = 0; a < n1;a++)
{
    cin >> x;
    nums.push_back(x);
}
int n=0,i,c=0;
sort(nums.begin(), nums.end());
// while(n==0)
// {
//     for(i=0;i<nums.size();i++)
// {
//     if(nums[i]>nums[i+1])
//     {
//         swap(nums[i],nums[i+1]);
//         c++;
//     }
// }
// if(c==0)
// {
//     n++;
// }

// }
for (auto it : nums)
{
    cout << it << " ";
        }


        

}