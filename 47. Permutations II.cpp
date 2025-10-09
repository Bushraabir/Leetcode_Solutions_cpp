class Solution {
public:
    set<vector<int>> s;
    void check(int index, vector<int>& nums, vector<vector<int>>& v, int n) {
        if(index >= n && !s.count(nums)) {
            v.push_back(nums);
            s.insert(nums);
            return;
        }
        for(int i = index; i < n; i++) {
            swap(nums[index], nums[i]);
            check(index + 1, nums, v, n);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        check(0, nums, v, n);
        return v;
    }
};