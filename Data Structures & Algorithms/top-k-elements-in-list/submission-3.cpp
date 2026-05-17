class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      sort(nums.begin(),nums.end());
      vector<pair<int,int>>v;

      int n=nums.size();
      int count=1;
      for(int i=1;i<=n;i++)
      {
        if( nums[i] == nums[i-1] )
        {
          count++;
        }
        else
        {
          v.push_back({count,nums[i-1]});
          count=1;
          
        }

      } 
      vector<int> t;
      sort(v.rbegin(),v.rend());
      for(int i=0;i<k;i++)
      {
        t.push_back(v[i].second);
      } 
      return t;  
    }
};
