class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int> hash;
        int n=s.length();
        int maxcount=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int c= s[i]-'a';
            if(hash.count(c)==0)
            {
                hash[c]++;
                count++;
            }
            else
            {
                maxcount=max(maxcount,count );
                i=i-count;
                hash.clear();
                
                //hash[c]++;
                count=0;
            }
        }
        maxcount=max(maxcount,count );
        return maxcount;
    }
};
