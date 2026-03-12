class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int m = nums.size();
        double maxSum = -1e9;
        double sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }
        maxSum = sum;
        for(int i = k ; i < m ; i++){
            sum = sum + nums[i] - nums[i-k];
            if(sum>maxSum) maxSum =sum;
        }
        return maxSum/k;
    }
};