class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans=1;
        vector<int>v(nums.size()+1);
        v[0]=0;
        for(int i=0;i<nums.size();i++){
            v[i+1]=nums[i]+v[i];
        }
        for(int i=0;i<v.size();i++){
            if(v[i]<0){
                ans=max(ans,(-v[i]+1));
            }
        }
        return ans;
    }
};