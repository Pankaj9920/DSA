#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i=i+2)
    {
    	if(a[i]>a[i-1])
    	{
    		swap(a[i],a[i-1]);
    	}
    	if(a[i]>a[i+1] && i<=n-2)
    	{
    		swap(a[i],a[i+1]);
    	}
    }
   
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}