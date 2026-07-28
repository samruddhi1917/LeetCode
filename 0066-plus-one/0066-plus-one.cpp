class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr;
        arr = digits;
        int n = digits.size();

        if (digits[n - 1] < 9) {
            arr[n - 1] = digits[n - 1] + 1;
        } else {
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] == 9) {
                    arr[i] = 0;
                } else {
                    arr[i]++;
                    return arr;
                }
            }
            arr.insert(arr.begin(), 1);
        }
        return arr;
    }
};