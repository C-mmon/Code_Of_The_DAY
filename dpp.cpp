class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if((sum&1)==1) return false;
        sum/=2;
        int n=nums.size();    
        vector<vector<bool>> dp(n, vector<bool> (sum+1, 0));
        
        for (int j = 0; j < n; j++) 
        {
        dp[j][0] = false;
        }
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < sum+1; j++) 
            {
                if(j<nums[i])
                {
                    dp[i][j]=dp[i-1][j];
                    
                }
                else
                {
                    dp[i][j] = (dp[i][j] || dp[i-1][j-nums[i-1]]);
                }
            }
        }
   
    return dp[n][sum];
        
    }
};
//gonna fix it some day
