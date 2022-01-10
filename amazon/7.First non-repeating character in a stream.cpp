class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    // Code here
// 		    string str=A;
// 		    queue<char> q;
// 		    unordered_map<char,int> m;
// 		    string result="";
// 		    for(int i=0;str[i];i++){
// 		      //  cout<<"here";
// 		        q.push(str[i]);
// 		        m[str[i]]++;
// 		      //  cout<<"freq :"<<q.front()<<" "<<m[q.front()]<<endl;
// 		        while(!q.empty()){
// 		            if(m[q.front()]>1){
// 		              // cout<<"cond 1"<<endl;
// 		               q.pop();
// 		            }
// 		            else
// 		               {  
// 		                  // cout<<"cond 2"<<endl;
// 		                   result+=q.front();
// 		                  // cout<<result<<endl;
// 		                   break;
// 		               }
// 		        }
// 		        if(q.empty())
// 		           result+="#";
// 		    }
		    
// 		    return result;
// 		}

	public:
		string FirstNonRepeating(string A){
		    int n = A.size();
		    string str=A;
            vector<int> last(26,-1);
            vector<int> freq(26,0);
            
            for(int i=0;i<n;i++){
                if(last[str[i]-'a']==-1)
                    last[str[i]-'a']=i;
            }
            string result="";
            for(int i=0;i<n;i++){
                freq[str[i]-'a']++;
                char ch='#';
                int x=str.size()+1;
                for(int j=0;j<26;j++)
                  {
                      if(freq[j]==1 && x>last[j]){
                          ch=char(j+'a');
                          x=last[j];
                      }
                  }
             result+=ch;      
                
            }
            
            return result;
		}

};