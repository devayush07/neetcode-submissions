class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
          int count=0;
          vector<int> output(n,0);
        for(int i=0;i<n;i++)
        {
          for(int j=i+1;j<n;j++)
          {
              
              if(temperatures[j]>temperatures[i])
              {
                  output[i]=j-i;
                  break;
              }
              
             




          }
         // j=i+1;
          
    




        }
        return output;
    }
};
