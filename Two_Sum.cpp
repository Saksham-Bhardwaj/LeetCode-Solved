//Time Complexity O(n) , Space Complexity can be said O(n) **if ignore the input array space else O(1)**
class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0;
        int j = nums.size()-1;
        unordered_map<int, int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] = i;
        }
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int val = target - nums[i];
            if(mp.find(val)!=mp.end()  &&  i!=mp.at(val))
            {
                ans.push_back(i);
                ans.push_back(mp.at(val));
                break;
            }
            
        }
        
        return ans;
    }
};
