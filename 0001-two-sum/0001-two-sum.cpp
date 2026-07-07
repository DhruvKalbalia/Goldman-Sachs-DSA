class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;//hashmap soln

        for (int i=0;i<nums.size();i++){
            int complement = target-nums[i];//stores complement

            if (mp.count(complement))//if complement is present 
                return {mp[complement],i};//returns indices

            mp[nums[i]] = i;
        }
        return{};
    }
};