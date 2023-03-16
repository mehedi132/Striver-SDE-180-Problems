#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int n){\
// sorting the array
sort(arr,arr+n);
cout << "The repeating element is ";
for(int i=0;i<n-1;i++){
	if(arr[i]==arr[i+1]){
		cout<<arr[i]<<endl;
		break;
	}
}

cout << "and the missing element is ";
int c = 0,i;
for(i=0;i<n;i++){
	if(i!=arr[i]){
		cout<<i<<endl;
        c++;
        break;
	}
}
if(c==0)
{
    cout<<"lol "<<i<<endl;
}

}

int main() {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1};
	int n = sizeof(arr) / sizeof(arr[0]);
	printTwoElements(arr, n);
	return 0;
}
//contributed by akashish__
