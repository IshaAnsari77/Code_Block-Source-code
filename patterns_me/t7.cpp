#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int fib1=0;
	int fib2=1;
	int next;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
       cout<<fib1<<" ";
	   next=fib1+fib2;
	   fib1=fib2;
	   fib2=next;
	}
	cout<<endl;
	}
}