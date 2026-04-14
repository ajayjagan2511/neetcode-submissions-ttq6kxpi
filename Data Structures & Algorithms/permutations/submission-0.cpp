class Solution {
public:
    void back(vector<int>& nums,vector<int> &curr,vector<vector<int>> &ans, unordered_map<int,int> mp){
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]=1;
                curr.push_back(nums[i]);
                cout<<nums[i]<<" ";
                back(nums,curr,ans,mp);
                if(curr.size()==nums.size())
                    ans.push_back(curr);
                curr.pop_back();
                mp[nums[i]]=0;
            }
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        vector<int> curr;
        back(nums,curr,ans,mp);
        return ans;
    }
};
