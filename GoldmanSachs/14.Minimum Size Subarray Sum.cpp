class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        
        int sum=0,len=INT_MAX,s=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                len=min(len,i-s+1);
                sum-=nums[s++];
            }
        } 
       return len==INT_MAX?0:len; 
    }
};