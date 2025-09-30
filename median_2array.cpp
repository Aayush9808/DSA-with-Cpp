class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>sorted;
        for(int i =0;i<nums1.size();i++)
            sorted.push_back(nums1[i]);
        for(int i =0;i<nums2.size();i++)
            sorted.push_back(nums2[i]);
        sort(sorted.begin(),sorted.end());
        int n=sorted.size();
        double ans=-1;
        if(n%2!=0){
            int idx=n/2;
            ans= sorted[idx];
        }
        else{
            int idx=n/2;
            double a= sorted[idx-1];
            double b= sorted[idx];
            ans=(a+b)/2;
        }
        return ans;
    }
};
