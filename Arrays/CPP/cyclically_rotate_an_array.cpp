#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int last=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=last;
    for(i=0;i<n;i++)
    cout<<a[i];
    return(0);

}