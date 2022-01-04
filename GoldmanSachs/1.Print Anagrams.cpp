class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>> store;
        for(auto str:string_list){
            string copy=str;
            sort(copy.begin(),copy.end());
            store[copy].push_back(str);
        }
        
        vector<vector<string>> result;
        
        for(auto p:store){
            vector<string> strings=p.second;
            result.push_back(strings);         
        }
     return result;    
    }
};