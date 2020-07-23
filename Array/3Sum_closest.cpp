class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n=nums.size();
        pair<int, int>res;
        res.first=INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
           int l=i+1, r=n-1;
            while(l<r){
                int x= nums[i]+nums[l]+nums[r];
                if(abs(x-target)<res.first){
                    res.first=abs(x-target);
                    res.second=x;
                }
                if(x>target) r--;
                else if(x==target) break;
                else l++;
            }
        }
        return res.second;
    }
};