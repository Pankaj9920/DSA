#include<iostream>
using namespace std;

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

void dnf_sort(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        if(a[mid]==1)
        {
            mid++;
        }
        if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
    display(a,n);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dnf_sort(a,n);
}