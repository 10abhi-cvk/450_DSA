#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<a[k-1]<<" "<<a[n-k];
    return(0);

}