vector <int> store;
        int len=nums.size();
        int max=INT_MIN;
        for(int j=0;j<=len-k;j++)
        {
        store.push_back(*max_element(nums.begin()+j,nums.begin()+j+k));
        }
        return store;
//naive must improve
//
