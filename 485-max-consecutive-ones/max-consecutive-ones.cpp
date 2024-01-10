class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int res = 0;

        for(auto &i: nums){
            if(i == 1)
            {
                count++;
            }
            else{
                res = count > res ? count : res;
                count = 0;
            }
        }
        res = count > res ? count : res;
        return res;
    }
};