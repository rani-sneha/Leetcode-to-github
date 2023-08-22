class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majele=nums[0], count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(count==0) majele=nums[i];
            if(nums[i]==majele) count++;
            else count--;
        }
        count=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i==majele]) count++;
        return count>nums.size()/2?majele:-1;
    }
};