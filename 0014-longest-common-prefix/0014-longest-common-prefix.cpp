class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        char prefix;
        int j = 0;
        int cnt = 0;
        int n = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            n = min(n, (int)strs[i].size());
        }

        if (strs[0].empty())
            return s;

        for (int i = 0; i < n; i++) {
            prefix = strs[j][i];
            int m = 1;
            while (m != strs.size()) {

                if (strs[m++][i] == prefix)
                    cnt++;
            }
            if (cnt == strs.size() - 1){
                s.push_back(prefix);
            }else{
                return s;
            }
            cnt = 0;
        }
        return s;
    }
};