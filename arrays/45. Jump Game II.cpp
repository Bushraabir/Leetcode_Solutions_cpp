class Solution {
public:
    int jump(vector<int>& nums) {
        int reach=0, count=0, last=0;  // reach: maximum reachable index from current position
    // count: number of jumps made so far
    // last: rightmost index that has been reached so far
        for(int i=0;i<nums.size()-1;i++){  // loop through the array excluding the last element
            reach = max(reach, i+nums[i]);  // update reach to the maximum between reach and i+nums[i]
            if(i==last){  // if i has reached the last index that can be reached with the current number of jumps
                last = reach;  // update last to the new maximum reachable index
                count++;  // increment the number of jumps made so far
            }
        }
        return count;  // return the minimum number of jumps required
    }
};
