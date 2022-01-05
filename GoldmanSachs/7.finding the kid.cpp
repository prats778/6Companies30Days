class Solution {
  public:
    int findPosition(int n , int m , int k) {
        // code here
        k--;
        while(m--){
            k++;
            if(k>n)
              k%=n;
        }
        
        return k;
    }
};