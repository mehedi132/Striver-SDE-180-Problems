#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 int re=0;
int merge1(vector<int>& a,int l,int m,int r)
    {
        int lsize,rsize,i,j,indexa;
        //int re=0;
        lsize=m-l+1;
        rsize=r-m;
        int la[lsize], ra[rsize];
        for(i=0;i<lsize;i++)
        {
            la[i]=a[l+i];
        }
        for(i=0;i<rsize;i++)
        {
            ra[i]=a[m+1+i];
        }

        int li = 0, ri = 0;
        i = 0, j = 0;
        int ls = sizeof(la) / sizeof(la[0]);
        int lr = sizeof(ra) / sizeof(ra[0]);
        while(i<ls)
        {
            double m=la[i]/2.0;
            if( j<lr && m<=ra[j])
            {
                i++;             
                 re += j;
            }
           else if(j==lr)
            {
                 i++;
                re += j;
            }
            else{
                
                
                j++;
            }
        }




        for(i=l,j=0; li<lsize && ri<rsize ; i++)
        {
            
             if(la[li]<=ra[ri])
             {
            a[i]=la[li];             
            li++;
          
            }
            else{             
              a[i] = ra[ri];          
              ri++;
            }
          
        }

        while(ri<rsize)
        {
            a[i]=ra[ri];
            ri++;
            i++;
        }
        
        while(li<lsize)
        {
            a[i]=la[li];
            li++;
            i++;
        }

        return re;

    }
    int  mergesort1(vector<int>& a,int l,int r)
    {
        int res;
        if(l>=r)
        {
            return 0;
        }
        int mid=(l+r)/2;
        mergesort1(a,l,mid);
        mergesort1(a,mid+1,r);
        res=merge1(a,l,mid,r);
        return res;

    }

int main()
    {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> a{40,25,19,12,9,6,2};
// int a[] = {2,4,3,5,1};
int s, r;
s=a.size();
r=mergesort1(a,0,s-1);
cout << r << endl;
for(auto it:a)
{
            cout << it << " ";
}
}
