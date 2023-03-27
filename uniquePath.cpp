#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int pa(int i,int j, int m,int n,vector<vector<int>>&a)
{
    if(i==m-1 && j== n-1)
    {
        return 1;
    }
    if(i>=m || j>=n)
    {
        return 0;
    }
    //return pa(i + 1, j, m, n) + pa(i, j + 1, m, n);
    if(a[i][j]!=-1)
    {
        return a[i][j];
    }
    else{
        a[i][j] = pa(i + 1, j, m, n, a) + pa(i, j + 1, m, n, a);
    }
}

int main()
    {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int m, n;
cin >> m >> n;
vector<vector<int>> a(m, vector<int>(n, -1));
//cout << a[2][0];
for(auto it:a)
{
    for(auto i:it)
    {
        cout << i << " ";
    }
    cout << endl;
}
int r;
r = pa(0, 0, m, n,a);
cout << r << endl;


for(auto it:a)
{
    for(auto i:it)
    {
        cout << i << " ";
    }
    cout << endl;
}
}