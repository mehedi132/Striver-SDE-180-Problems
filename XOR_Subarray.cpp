#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
  int xo=0,c=0,i,y;
  map<int,int>m;
  for(i=0;i<arr.size();i++)
  {
      xo=xo^arr[i];
      if(xo==x)
      {
          c++;
      }
      //cout << "xo = " << xo << endl;
    
      
      y=xo^x;
      //cout << "y= " << y << endl;
      if(m.find(y)!=m.end())
      {
          c=c+m[y];
      }
        m[xo]++;
  }
  
//   for (auto itr = m.find(50); itr != m.end(); itr++) {
        
//         cout << itr->first << '\t' << itr->second << '\n';
//     }
//   for(auto i:m)
//   {
//       cout << i.first << " " << i.second << endl;
//   }
  return c;
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 vector<int> a{5,3,8,3,10}; //{5 ,3 ,8 ,3 ,10}
int r;

r = subarraysXor(a,8);
cout << r;
}