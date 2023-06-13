#include <bits/stdc++.h>
using namespace std;
int main() {
	int n=1;
	for(int i=0;i<4;i++)
	{
		for(int k=i;k<4-i+1;k++)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<"\n";
		n=n+2;
	}
	return 0;
}