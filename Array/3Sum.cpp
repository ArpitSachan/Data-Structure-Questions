class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> v;
        
        int n=nums.size();
        
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
           int l=i+1, r=n-1;
            if(i==0||nums[i]>nums[i-1]){
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0) 
                    v.push_back({nums[i], nums[l], nums[r]});
                if(nums[i]+nums[l]+nums[r]>0){ 
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
        return v;
    }
};