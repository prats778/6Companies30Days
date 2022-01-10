class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        your code here
        deque<int> dq;
        int i;
        for(i=0;i<k;i++)
          {
              while(!dq.empty() && arr[i]>=arr[dq.back()])
                  {
                      dq.pop_back();
                  }
                dq.push_back(i);   
          }
        vector<int> res;
        res.push_back(arr[dq.front()]);
        for(;i<n;i++){
            while(!dq.empty() && dq.front()<=i-k)
                {
                    dq.pop_front();
                }
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                    dq.pop_back();
            dq.push_back(i);   
            res.push_back(arr[dq.front()]);
        }
        
        return res;
        
        // multiset<int> m;
        // vector<int> res;
        // for(int i=0;i<k;i++)
        //      m.insert(arr[i]);
        // res.push_back(*m.rbegin());
        // for(int i=k;i<n;i++)
        //    {
        //        m.erase(m.find(arr[i-k]));
        //        m.insert(arr[i]);
        //        res.push_back(*m.rbegin());
        //    }
        // return res;   
    }
};
