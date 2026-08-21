class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        for(int i=0;i<chars.size();i++){
            int j=i;
            s.push_back(chars[i]);
            int cnt=1;
            while(i + 1 < chars.size() && chars[i]==chars[i+1]){
                cnt++;
                i++;
            }
            if(cnt>1 && cnt<10)
                s.push_back(cnt +'0');
            if(cnt>=10){
                string digit;
                int num=0;
                while(cnt>0){
                    int n=cnt%10;
                    digit.push_back(n+'0');
                    num++;
                    cnt=cnt/10;
                }
                for(int i=num-1;i>=0;i--){
                    s.push_back(digit[i]);
                }

            }
        }
        chars.clear();
        for(int i=0;i<s.size();i++){
            chars.push_back(s[i]);
        }
        return s.size();

    }
};