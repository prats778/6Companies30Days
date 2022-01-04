/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int n=src.length();
  string result="";
  
  for(int i=0;i<n;i++)
    {
        int ctr=1;
        while(i<n-1 && src[i]==src[i+1])
            {
                ctr++;
                i++;
            }
        result+=src[i];
        result+=(ctr+'0');
    }
    
    return result;
} 