class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int sum;
        string ans;
        int n=max(num1.size(),num2.size());
        int m=min(num1.size(),num2.size())-1;
        string num_max;
        string num_min;

        if(num1.size()>num2.size()){
            num_max=num1;
            num_min=num2;
        }else{
            num_max=num2;
            num_min=num1;
        }

        for(int i=n-1;i>=0;i--){
            if(m>=0)
                sum=(num_min[m--]-'0')+(num_max[i]-'0')+carry;
                
            else
                sum=(num_max[i]-'0')+carry;

            ans.push_back((sum%10)+'0');
            carry=sum/10;
        }
        if(carry)
            ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
}; 