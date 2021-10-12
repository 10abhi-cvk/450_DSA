#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[100];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int small=a[0]+k;
    int big = a[n-1]-k;
    int ans=a[n-1]-a[0];
    int mn,mx;
    for(i=0;i<n-1;i++)
    {
        mn=min(small,a[i+1]-k);
        mx=max(big,a[i]+k);
        if(mn<0)
            continue;
        else
            ans=min(ans,mx-mn);
    }
    cout<<ans;
    
}