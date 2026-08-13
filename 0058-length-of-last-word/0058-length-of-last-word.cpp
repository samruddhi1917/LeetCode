class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(cnt>0 && s[i]==' '){
                return cnt;
            }
            if(s[i]!=' ')
                cnt++;
        }
        return cnt;
    }
};