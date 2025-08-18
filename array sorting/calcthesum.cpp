#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

    int o; cin>>o;
	int temp[n];
	while(o>0){
		o--;
		int x; cin>>x;
		for(int i=0;i<n;i++){
			int idx=i-x;
			if(idx<0)
			idx=idx+n;
			temp[i]=arr[i]+arr[idx];
		}
		for(int i=0;i<n;i++)
		arr[i]=temp[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
sum = (sum + arr[i]) % 1000000007;
	}
cout<<sum<<endl;
}