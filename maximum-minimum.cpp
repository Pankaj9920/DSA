#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min1=INT_MAX;
    int max1=INT_MIN;
    for(int i=0;i<n;i++)
    {
        min1=min(a[i],min1);
        max1=max(a[i],max1);
    }
    cout<<min1<<" "<<max1;
}