#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

int fin[n],a[n],i;
for(i=0;i<n;i++)
cin>>a[i];
int j=0,k=0,l=0,t,p;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        l++;
        else if(a[i]==1)
        j++;
        else
        k++;
    }
   // cout<<" "<<l<<" "<<j<<" "<<k<<"\n";
    for(i=0;i<l;i++)
    fin[i]=0;
    for(p=0;p<j;p++)
    fin[i+p]=1;
    for(t=0;t<k;t++)
    fin[i+p+t]=2;
    for(i=0;i<n;i++)
    cout<<fin[i]<<" ";

    return(0);
}