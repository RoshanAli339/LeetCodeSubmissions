class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int aSum(0), sum(0);
        vector<int> temp;

        for (auto &i: nums){
            if(find(temp.begin(), temp.end(), i) == temp.end()){
                sum += 2*i;
                temp.push_back(i);
            }
            aSum += i;
        }
        return sum - aSum;
    }
};