class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
       
        int j = 0;
        int i=0;
        for (i = 1; i <= s.size(); i++) {
            if (s[i] == ' ' || i == s.size()) {

                int m = i - 1;
                while (m > j)
                    swap(s[j++], s[m--]);

                j = i + 1;
            }
        }
        i=0;
        int cnt=0;
        j=s.size()-1;
        
        while(s[i]==' '){
            s.erase(s.begin());
            cnt++;
        }
        while(s[j-cnt]==' '){
            s.pop_back();
            j--;
        }
        cnt=0;
        i=0;
        while(i<s.size()){
            if(s[i]==' ')
                cnt++;
            else{
                if(cnt>1)
                    s.erase(i-cnt+1,cnt-1);
                i=i-cnt;
                cnt=0;
            }
            i++;
        }
        

        return s;
    }
};