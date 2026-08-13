class Solution {
public:
    string reverseStr(string s, int k) {
        int j = 0;
        int i;
        for (i = 2 * k - 1; i < s.size(); i = i + 2 * k) {
            int m = j + k - 1;
            while (m > j) {
                swap(s[m--], s[j++]);
            }
            j = i + 1;
        }
        int remaining=s.size()-j;

        if (remaining<k) {
            i = s.size() - 1;
            while (i > j) {
                swap(s[i--], s[j++]);
            }
            return s;
        }
        if (remaining >= k && remaining < 2 * k) {
            i = j+ k-1;
            while (i > j)
                swap(s[i--], s[j++]);
            return s;
        }
        return s;
    }
};