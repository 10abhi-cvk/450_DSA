#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int mn,mx;
    mn=INT_MAX;
    mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(mn>a[i])
        mn=a[i];
    }

    for(i=0;i<n;i++)
    {
        if(mx<a[i])
        mx=a[i];
    }
    cout<<mn<<" "<<mx;
    return(0);
}