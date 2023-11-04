class Solution {
public:
    int dp[100001][100001];
    long long minIncrementOperations(vector<int>& nums, int k) {
        // memset(dp,-1,sizeof(dp));
        int ans = 0;
        for(int level = 0;level < nums.size();level++){
            int t = 1e9;
            for(int last = 0; last < level - 1;last++){
                int op1,op2;
                op1 = (nums[level] >= k) ? 1e9 : k - nums[level];
                if(level - last > 3){
                    op2 = 1e9;
                }else{
                    op2 = 0;
                }
                dp[level][last] = min(op1,op2);
                t = min(dp[level][last],t);
            }
            ans += t;
        }
        return ans;
    }
};