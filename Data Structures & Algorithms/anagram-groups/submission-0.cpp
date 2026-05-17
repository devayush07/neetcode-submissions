class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>hash;
        int n=strs.size();
                
       for(int i=0;i<strs.size();i++)
       {
        string s=strs[i];


        vector<int>freq(26,0);
        
       

            for(int j=0;j<s.length();j++)
                {
                char c=s[j];
                freq[c-'a']++;
                }
             string key=to_string(freq[0]);
            for(int j=1;j<26;j++)
            {
                key=key+ ","+to_string(freq[j]);
            }
       
        hash[key].push_back(s);
       }
    vector<vector<string>> result;

        unordered_map<string, vector<string>>::iterator it;

        for (it = hash.begin(); it != hash.end(); it++) {
            result.push_back(it->second);
        }
    return result;
    }
};
