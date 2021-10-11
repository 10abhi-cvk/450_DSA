#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<int> s;
    int i,n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
        s.insert(a[i]);
    for(i=0;i<m;i++)
        s.insert(b[i]);
    cout<<s.size();
    return(0);
}