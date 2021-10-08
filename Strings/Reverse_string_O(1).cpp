#include <bits/stdc++.h>
using namespace std;
 void change(vector<char>& s)
 {
     int n=s.size();
     int i;
     for(i=0;i<n--;i++)
     {
         char temp=s[i];
         s[i]=s[n];
         s[n]=temp;
     }
 }

 int main()
 {
     vector<char> s;
     s.push_back("HELLO");
     change(&s);
     cout<<s.pop_back;
     return(0);
 }