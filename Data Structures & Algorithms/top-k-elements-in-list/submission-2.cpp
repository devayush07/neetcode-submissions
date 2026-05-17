class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      int n =nums.size();
      sort(nums.begin(),nums.end());
     vector<pair<int,int>>v;  
      int count=1;
     for(int i=1;i<=n;i++)
     {
      if( nums[i] == nums[i-1])
      {
        count++;
      }
      else
      {
        
        v.push_back({count,nums[i-1]});
        count=1;
      }
    

     }
      sort(v.rbegin(),v.rend());
      vector<int>t;
      for(int i=0;i<k;i++)
      {
        t.push_back(v[i].second);
      }

      return t;


       
    }
};















