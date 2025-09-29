class Solution {
private:
    void getperm(vector<int>& nums,vector<vector<int>>&ans, int idx){
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i=idx; i<nums.size() ; i++){
            swap(nums[i], nums[idx]); //Getting ith index
            getperm(nums,ans,idx+1);
            swap(nums[i], nums[idx]); //Backtracking
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getperm(nums, ans, 0);
        return ans;
    }
};