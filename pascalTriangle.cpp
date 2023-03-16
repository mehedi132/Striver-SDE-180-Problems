#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int>> generate;
vector<int> a,z;
int i, j, r,v,c;
a.push_back(1);
//a.push_back(10);
//generate.push_back(a);
//generate[0][0] = 1;
//  z.push_back(100);
//  z.push_back(10);
// generate.push_back(z);
// cout << generate[1][0] << endl;
// generate[1][0] = 50;
;

for (i = 0; i < 6; i++)
{  vector<int> b;
if(i==0)
{
     b.push_back(1);
}
   
    for (j = 1; j <= i; j++)
    {
        if (j == 1)
        {
            b.push_back(1);
        }
        if (i != j)
        {
          //  v = generate[i - 1][j - 1];
           // cout << "hi"<<generate[i-1][j-1]<<" ";
            r = generate[i - 1][j - 1] + generate[i - 1][j];
            b.push_back(r);
        }
        else
        {
            b.push_back(1);
        }
       
    }
     generate.push_back(b);

}

int m = generate.size();
//cout << m << endl;
for (i = 0; i < m; i++)
{
    for (auto it : generate[i])
    {
        cout << it << " ";
    }
    cout << endl;
        }
        
}


