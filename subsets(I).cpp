class Solution {
private:
    void store(vector<int>& nums,vector<vector<int>>& ans , vector<int>& temp, int i){
        if(i==nums.size()){
            ans.push_back({temp});
            return;
        }
        //INCLUDES- PICK
        temp.push_back(nums[i]); 
        store(nums,ans,temp,i+1);

        //EXCLUDE- NOT PICK
        temp.pop_back(); //Back Tracking
        store(nums,ans,temp,i+1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        store(nums,ans,temp,0);
        return ans;
    }
};