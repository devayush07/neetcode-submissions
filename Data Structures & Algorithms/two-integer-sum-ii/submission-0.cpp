class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>hash;

        for(int i=0;i<numbers.size();i++)
        {
          int temp=target-numbers[i];
          if(hash.count(temp))
          {
            return {hash[temp],i+1};
          }

          hash[numbers[i]]=i+1;
        }
        return {};
        
    }
};
