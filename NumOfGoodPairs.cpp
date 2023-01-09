class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) 
            mp[nums[i]]++;
        
        for(auto i = mp.begin(); i != mp.end(); i++) 
            if(i -> second > 1) {

                int temp = i -> second;

                for(int j = 1; j <= i -> second; j++) 
                    count += (temp - j);
            }
        return count;
    }
};