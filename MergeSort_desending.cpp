#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge1(vector<int> &a, int l,int m,int r)
{
    int left = l;
    int ri = m + 1;
    vector<int> t;
    while(left<=m && ri<=r)
    {
        if(a[left]<=a[ri])
        {
            t.push_back(a[ri]);
            ri++;
        }
        else{
           t.push_back(a[left]);
            left++; 
        }
    }
    while(left<=m)
    {
        t.push_back(a[left]);
            left++; 
    }
    while(ri<=r)
    {
          t.push_back(a[ri]);
            ri++;
    }

    for (int i = l; i <= r;i++)
    {
            a[i] = t[i - l];
    }
}

void mergesort1(vector<int> &a,int l, int r)
{
    if(l>=r)
    {
        return;
    }
    int mid = l + (r - l) / 2; // to avoid overflow;
    mergesort1(a, l, mid);
    mergesort1(a, mid + 1, r);
    merge1(a, l, mid, r);
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> a{40,25,12,19,90,6,2};
int s = a.size();
for(auto i:a)
{
        cout << i << " ";
}
cout << endl;
mergesort1(a, 0, s - 1);
for(auto i:a)
{
        cout << i << " ";
}

// map<int, int> m;
// unordered_map<int, int> mp;
// m[5] = 10;
// m[1] = 100;
// m[5] = 20;
// m[2] = 30;

// mp[5] = 10;
// mp[1] = 100;

// mp[2] = 50;
// mp[6] = 60;
// mp[1] = 1005;
// mp[10] = 1105;

// //mp[5] = 20;
// for(auto it:m)
// {
//  cout <<it.first<<" "<< it.second << " ";
// }
// cout << endl;
// for(auto it:mp)
// {
//   cout <<it.first<<" "<< it.second << " ";
// }

}
