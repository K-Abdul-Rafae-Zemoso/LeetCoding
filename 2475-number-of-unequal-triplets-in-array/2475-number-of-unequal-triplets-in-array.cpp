class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for( int i = 0; i < n ;i++)
        {
            for( int j = i+1; j < n; j++)
            {
                if( nums[i] != nums[j] )
                {
                    for( int k = j+1; k < n; k++)
                    {
                        if( nums[k] != nums[j] && nums[k] != nums[i] )
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};