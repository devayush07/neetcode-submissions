class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
     int n=nums.size();
     unordered_set<int> hash;

     for(int i=0;i<n;i++)
     {
        int x=nums[i];
        if(hash.count(x))
        return true;
        hash.insert(x);
        

     }  
     return false;
    }
};