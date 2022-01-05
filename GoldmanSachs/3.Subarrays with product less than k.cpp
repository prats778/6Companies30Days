class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod=1;
        int l=0,r=0,ctr=0;
        
        while(r<n){
            prod*=a[r];
            while(prod>=k)
               {
                   prod/=a[l];
                   l++;
               }
            ctr+=(1+r-l);   
            r++;
              
        }
        
        return ctr;
    }
};