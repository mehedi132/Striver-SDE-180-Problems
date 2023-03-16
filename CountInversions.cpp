#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int res = 0;
void merge1(int a[],int l, int m, int r)
{
    int i,r1, j,ai, lsize, rsize;
    lsize = m - l + 1;
    rsize = r - m;
    int la[lsize];
    int ra[rsize];
    for (i = 0; i < lsize;i++)
    {
        la[i] = a[l+i];
    }
    for (i = 0; i < rsize;i++)
    {
        ra[i] = a[m+1+i];
    }
    for (i = 0,j=0,ai=l; i < lsize && j<rsize;ai++)
    {
        if(la[i]>ra[j])
        {
            a[ai] = ra[j];
            j++;
            r1 = sizeof(la) / sizeof(la[0]);
            r1 = r1 - i;
            res += r1;
        }
        else
        {a[ai] = la[i];
            i++;

        }
        
    }
    while(i<lsize)
    {
        a[ai] = la[i];
            i++;
            ai++;
    }
    while(j<rsize)
    {
        a[ai] = ra[j];
            j++;
            ai++;
    }
   
}
void mergeSort(int a[], int l, int r)
{
    if(l>=r)
    {
            return;       
    }
    int mid = (l + r) / 2;
            mergeSort(a, l, mid);
            mergeSort(a, mid + 1, r);
            merge1(a, l, mid, r);
    
}

    int main()
    {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a[] = {1,2,3,4};
int r;
int s = sizeof(a) / sizeof(a[0]);
mergeSort(a, 0, s - 1);
for (int i = 0; i < s;i++)
{
         cout << a[i] << " ";
}
cout << endl
     << res;
}