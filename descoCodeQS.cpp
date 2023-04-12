#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a = 10, b = 25,c;
cout << "a=" << a << " b= " << b << endl;
c = a++ + b++;
cout << "a=" << a << " b= " << b << endl;
cout << "a=" << a << " b= " << b << endl;
b = ++b + ++a;
cout << "a=" << a << " b= " << b << endl;
}
