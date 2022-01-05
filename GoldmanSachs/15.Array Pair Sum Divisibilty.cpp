class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
            {
                int rem=nums[i]%k;
                m[rem]++;
            }
            
        for(int i=0;i<nums.size();i++){
           int rem=nums[i]%k;
           if(2*rem==k && m[rem]&1 )
               return false;
           if(rem==0 && m[rem]&1)
               return false;
           if(m[rem]!=m[k-rem])
               return false;
        }    
        
        return true;
    }
};