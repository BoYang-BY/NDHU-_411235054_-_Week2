class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int ans = nums.back() - nums.front();

        for(int i=1 ; i<nums.size() ; i++ ){
            int newMin = min(nums[0]+k , nums[i]-k);
            int newMax = max(nums[i-1]+k , nums.back()-k);
            ans = min(ans , newMax - newMin);
        }
        return ans;
    }
};