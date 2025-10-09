class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        std::stack<int> stk;
        stk.push(height[0]);
        
        for (int i = 1, N = height.size(); i < N; ++i) {
            if (height[i] < stk.top()) {
                stk.push(height[i]);
                continue;
            }
            
            std::vector<int> kicked_out;
            
            while (!stk.empty() && height[i] >= stk.top()) {
                kicked_out.push_back(stk.top());
                stk.pop();
            }
            
            int ceiling = stk.empty()
                ? std::min(height[i], kicked_out.back())
                : std::min(stk.top(), height[i]);
            
            for (int j = 0; j < kicked_out.size() - 1; ++j)
                ans += ceiling - kicked_out[j];
            if (!stk.empty()) ans += ceiling - kicked_out.back();
            
            if (!stk.empty()) {
                for (int j = 0; j < kicked_out.size(); ++j)
                    stk.push(ceiling);
            }
            stk.push(height[i]);
        }
        
        return ans;
    }
};