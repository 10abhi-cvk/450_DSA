#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<"Max ="<<a[n-1]<<"Min ="<<a[0];
    return(0);
}