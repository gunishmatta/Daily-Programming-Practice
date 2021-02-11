class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{

    int result =0;
    
    int start=0;
    int end=S.length()-1;
    
    while(start<end)
    {
        if(S[start++]!=S[end--])
        {
            return 0;
        }
        
    }
    return 1;


	}

};
