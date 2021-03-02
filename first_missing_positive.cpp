class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int min=INT_MIN;
        int max=INT_MAX;
        int sum=0;
        bool h=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {   
                sum+=nums[i];
                if(nums[i]==1)
                {
                    h=true;
                }
                if(nums[i]>min)
                {
                    min=nums[i];
                }
                if(nums[i]<max)
                {
                    max=nums[i];
                }
            }
        }
        int act_sum;
        if(h==true)
        {
            
        act_sum=(min*(min+1))/2;
        }
        else 
        {
            
        act_sum=(min*(min+1))/2-(max*(max+1))/2;
        }
        
        if(h==false)
        {
            return 1;
        }
        else if(act_sum-sum==0 && h==true)
        {
            return min+1;
        }
        else
        {
        return act_sum-sum;
        }
    }
};

//fucked up
