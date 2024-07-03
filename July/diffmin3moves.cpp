class Solution {
public:
    int minDifference(vector<int>& nums) {
        int minn=INT_MAX;
        sort(nums.begin(),nums.end());
int n=nums.size();
if(n<=4) return 0;
minn=min(minn,nums[n-4]-nums[0]);  //change 3right 0left
minn=min(minn,nums[n-1]-nums[3]);  //change 3left 0right
minn=min(minn,nums[n-3]-nums[1]);  //change 2right 1left
minn=min(minn,nums[n-2]-nums[2]);  //change 2left 1right
        return minn;
    }
};
