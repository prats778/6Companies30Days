class Solution {
public:
    int longestMountain(vector<int>& arr) {
        //2 pointer approach
        int n=arr.size();
        int base=0;
        int result=0;
        while(base<n){
            int end=base;
            if(end+1<n && arr[end]<arr[end+1])
            {
                while(end+1<n && arr[end]<arr[end+1])
                     end++;
                //if it is really a peak
                if(end+1<n && arr[end]>arr[end+1])
                {
                    while(end+1<n && arr[end]>arr[end+1])
                         end++;
                    result=max(result,end-base+1);
                }
            }
            base=max(base+1,end);
        }
       return result; 
    }
};