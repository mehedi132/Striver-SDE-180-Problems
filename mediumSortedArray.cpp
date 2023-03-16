#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n1,n2,a,x;
vector<int> nums1,nums2;
cin >> n1>>n2;
for (a = 0; a < n1;a++)
{
    cin >> x;
    nums1.push_back(x);
}

for (a = 0; a < n2;a++)
{
    cin >> x;
    nums2.push_back(x);
}
int m,n,i,j,k,l,p;
j = 0, k = 0;
m = nums1.size();
n = nums2.size();

vector<int> final;
double res;
for(i=0,j=0;i<m &&j<n;)
        {
            if(nums1[i]<nums2[j])
            {
                final.push_back(nums1[i]);
                i++;
            }
            else
            {
                 final.push_back(nums2[j]);
                 j++;
            }
        }
        while(i<m)
        {
           final.push_back(nums1[i]);
                i++;
        }
        while (j<n)
        {
            final.push_back(nums2[j]);
                 j++;
        }
for (auto it : final)
{
    cout << it << " ";
}

        k=final.size();
        cout << "k=" << k << endl;
        if(k&1)
        {
             l=(k+1)/2;
             cout << "l=" << l << endl;
             int r=final[l-1];
             cout << endl<< r;
        }

}