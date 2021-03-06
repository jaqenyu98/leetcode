class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rst;
	int size = nums.size();
	rst.push_back(nums[0]);
	for (int i = 1; i < size; ++i)
	{
	    rst.push_back(rst[i-1] + nums[i]);
	}
	return rst;
    }
};
