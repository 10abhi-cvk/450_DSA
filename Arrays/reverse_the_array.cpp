#include <iostream>
using namespace std;
int main()
{
    int n,s,i,j;
    string temp;
    cin>>n;
    s=n;
    string a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        n--;
    }
    for(j=0;j<s;j++)
    cout<<a[j]<<" ";
    return(0);
}