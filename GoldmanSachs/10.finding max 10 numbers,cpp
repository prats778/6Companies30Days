class Solution {
public:
     vector<int> findMax(vector<int> arr){
          //using min heap
         
          priority_queue<int,vector<int>,greater<int>> p;
         
          for(int i=0;i<arr.size();i++)
          {
              p.push(arr[i]);
              if(p.size()>10)
                   p.pop();
          }
         
          vector<int> result;
         
          for(auto no:p)
              result.push(no);
          return result;
     }
};