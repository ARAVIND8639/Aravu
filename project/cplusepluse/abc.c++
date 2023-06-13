#include <bits/stdc++.h>
using namespace std;
int main() {
	int n=4,c=0;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<=i;k++)
        {
            cout<<char(69+c)<<" ";
            c=c+1;
        }
        cout<<"\n";
        c=0;    }
	return 0;
}