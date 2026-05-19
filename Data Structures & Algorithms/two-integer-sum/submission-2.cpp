class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n= nums.size();

        unordered_map<int,int> hash;

        for(int i=0;i<n;i++)
        {
            int x=target - nums[i];

            if(hash.count(x))
            {
            return {hash[x],i};
            }
            hash[nums[i]]=i;

        }
        
        
    }
};
