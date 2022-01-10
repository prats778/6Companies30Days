class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        // code here
        int profit[k+1][n];
        
        //if 0 days then no profit
        for(int i=0;i<=k;i++)
           {
               profit[i][0]=0;
           }
        
        //no transactions no profit   
        for(int i=0;i<n;i++)
           {
               profit[0][i]=0;
           }
        
        for(int i=1;i<=k;i++)
            for(int j=1;j<n;j++)
                {
                    int max_profit=INT_MIN;
                    for(int l=0;l<j;l++)
                        max_profit=max(max_profit,a[j]-a[l]+profit[i-1][l]);
                        
                    profit[i][j]=max(profit[i][j-1],max_profit);    
                }
                
        return profit[k][n-1];        
    }
};