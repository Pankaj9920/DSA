#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]==b[j])
		{
			cout<<a[i]<<" ";
			i++;j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
		
	}
	return 0;
}