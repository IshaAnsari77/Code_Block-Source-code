#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int space=1;space <=n-i;space++){
			cout<<"\t";
		}
		int num=i;
		for(int j=1;j<=i;j++){
			cout<<num<<"\t";
			num++;		
			}
			num=num-2;
			for(int j=1;j<i;j++){
			cout<<num<<"\t";
			num--;

	}
	cout<<endl;
	}
}