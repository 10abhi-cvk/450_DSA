#include <iostream>
using namespace std;
int main()
{
    int n,f,l,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    f=0;
    l=n-1;
    while(f<l)
    {
        swap(a[f],a[l]);
        f++;
        l--;
    }
 
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return(0);
}