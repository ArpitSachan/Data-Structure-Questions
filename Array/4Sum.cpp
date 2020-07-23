class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     
        vector<vector<int>> v;
        
        int n=nums.size();
        
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-3;i++){
            if(i==0 || nums[i]>nums[i-1]){
            for(int j=i+1;j<n-2;j++){
           int l=j+1, r=n-1;
            if(nums[j]>nums[j-1] || j==i+1){
            while(l<r){
                if(nums[i]+nums[j]+nums[l]+nums[r]==target) {
                    v.push_back({nums[i],nums[j], nums[l], nums[r]});

                }
                if(nums[i]+nums[j]+nums[l]+nums[r]>target){ 
                    int x=nums[r];
                    while(nums[r]==x&&l<r) r--;
                }
                else{
                    int x=nums[l];
                    while(nums[l]==x &&l<r) l++;
                } 
            }
            }
        }
            }
        }
        return v;
    }
};