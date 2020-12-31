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
    int max1=INT_MIN;
    for(i=0;i<n;i++)
    {
        max1=max(max1,a[i]);
    }
    int countarray[10]={0};
    for(i=0;i<n;i++)
    {
        countarray[a[i]]++;
    }
    int s=0;
    for(i=0;i<=max1;i++)
    {
        s+=countarray[i];
        countarray[i]=s;
    }
    int answer[n];
    for(i=n-1;i>=0;i--)
    {
        --countarray[a[i]];
        answer[countarray[a[i]]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<answer[i];
    }
}