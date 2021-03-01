class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        sort(candyType.begin(),candyType.end());
        int count=0;
        int store=0;
        for(int i=0;i<candyType.size()-1;i++)
        {
            if(candyType[i]!=candyType[i+1])
            {
                count++;
                store=i;
            }
            
        }
        if(candyType[store]!=candyType[candyType.size()-1])
        {
            count++;
        }
        if(count==0)
        {
        return 1;   
        }
        else if(candyType.size()/2>=count)
        {
            return count;
        }
        else
        {
            return (candyType.size()/2);
        }
    }
};
