class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int n=s.size();

        int l=0;
        int r=0;
        int  maxlen=0;

        for(r=0;r<n;r++)
        {
            char c=s[r];

            while(hash.count(c))
            {
                hash.erase(s[l]);
                l++;
            }
            hash[c]=1;

            maxlen=max(maxlen,r-l+1);
            
        }
        return maxlen;
    }
};
