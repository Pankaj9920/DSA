#include<iostream>
using namespace std;

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void selection_sort(int a[],int n)
{
	int i,j,min_index;
	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min_index])
				min_index=j;
		}
		swap(a[i],a[min_index]);
		display(a,n);
	}
	display(a,n);

}

int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selection_sort(a,n);
}