class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<long> pre(nums.size(),1), post(nums.size(),1);
        vector<int> ans(nums.size(),1);
        post[nums.size()-1]=nums[nums.size()-1];
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=nums[i]*pre[i-1];
            post[nums.size()-i-1]=nums[nums.size()-i-1]*post[nums.size()-i];
        }
        for(int i=0;i<nums.size();i++){
            if(i==0)
            ans[i]=post[i+1];
            else if(i==nums.size()-1)
            ans[i]=pre[i-1];
            else
            ans[i]=pre[i-1]*post[i+1];
        }
        return ans;
    }
};
