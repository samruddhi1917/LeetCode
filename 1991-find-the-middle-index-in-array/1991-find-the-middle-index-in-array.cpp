class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector <int> prefix1;
        vector <int> prefix2;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            prefix1.push_back(nums[i]+sum);
            sum=prefix1[i];
        }
        sum=0;
        int k=0;
        for(int i=nums.size()-1;i>=0;i--){
            prefix2.push_back(nums[i]+sum);
            sum=prefix2[k];
            k++;
        }
        reverse(prefix2.begin(), prefix2.end());

        for(int i=0;i<nums.size();i++){
            if(prefix1[i]==prefix2[i]){
                return i;
            }
        }

        return -1;


    }
};