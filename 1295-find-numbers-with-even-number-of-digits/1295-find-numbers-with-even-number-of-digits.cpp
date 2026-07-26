class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            n=nums[i];
            while(n>0){
                n=n/10;
                cnt++;
            }
            if(cnt%2==0)
                ans++;
        }
        return ans;
    }
};