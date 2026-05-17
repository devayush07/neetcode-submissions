class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int n=nums.size();
        unordered_set<int>hash(nums.begin(),nums.end());
        int longest =0;
       // hash.insert(nums[0]);
        for(int i=0;i<n;++i)
        {
            int x=nums[i];
            if(hash.count(x-1)==0)
            {
                int count=1;
                while(hash.count(x+count))
                {
                    count++;
                }
            longest=max(longest,count);
            }
        
            
        }
        return longest;
    }
};
