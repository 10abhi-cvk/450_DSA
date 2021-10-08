#include<bits/stdc++.h>
#include <string>
using namespace std;
/*string CountOccurrences (string S) 
{*/
   
   /*	int a[27]={0};
   	string sol="";
   
   	for(int i=0;i<S.size();i++){
   		a[S[i]-'a']++;
   	}	
   	
   	for(int i=0;i<S.size();i++){
   		if(a[S[i]-'a']>0){
   			sol+=S[i] ;
   			sol+=to_string(a[S[i]-'a']);
			a[S[i]-'a']=0;
		}
   	}
   
   	return sol;
}*/

int main() {
	
    
   /* int T;
    cin >> T;
    string out_;
    
    for(int t_i=0; t_i<T; t_i++)
    {
        string S;
        cin>>S;
        out_ = CountOccurrences(S);
        cout << out_;
    }
    return 0;*/
    string str1;
    cin>>str1;
    cout<<to_upper(str1[0]);
    return 0;
}