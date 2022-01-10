class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        multiset<int> ms;
        for(int i=0;i<k;i++)
             ms.insert(arr[i]);
             
        vector<int> ans;
        ans.push_back(*ms.rbegin());
        
        for(int i=k;i<n;i++)
           {
               ms.insert(arr[i]);
               ms.erase(ms.find(arr[i-k]));
               ans.push_back(*ms.rbegin());
           }
        
        return ans;   
    }
};