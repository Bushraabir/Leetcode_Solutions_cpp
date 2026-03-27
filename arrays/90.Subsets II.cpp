class Solution {
public:

    void backtrack(vector<int>& nums, vector<int>& temp, int start, vector<vector<int>>& result) {
        result.push_back(temp);  // Add current subset

        for (int i = start; i < nums.size(); i++) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i - 1]) continue;

            temp.push_back(nums[i]);           // Include nums[i]
            backtrack(nums, temp, i + 1, result); // Recurse
            temp.pop_back();                   // Backtrack
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(nums, temp, 0, result);
        return result;

        
    }
};