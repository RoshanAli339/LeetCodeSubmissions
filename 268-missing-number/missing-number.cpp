class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int i = 0;
        for(; i < nums.size(); i++)
            sum += nums[i];
        return (i*(i+1))/2 - sum;
    }
};