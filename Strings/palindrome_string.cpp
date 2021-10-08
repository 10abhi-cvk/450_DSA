	int isPlaindrome(string S)
	{
	    int l=S.size(),flag=0,i;
	    for(i=0;i<l--;i++)
	    {
	        if(S[i]!=S[l]){
	        flag=1;break;}
	        else 
	        continue;
	    }
	    if(flag==1)
	    return 0;
	    else
	    return 1;
	}